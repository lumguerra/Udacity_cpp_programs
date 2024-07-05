#include <fstream>
#include <iostream>
#include <sstream>
#include <string>
#include <vector>

enum class State
{
  kEmpty,
  kObstacle
};

template <typename T>
void printVector(std::vector<T>& vec)
{

  std::cout << "Vector: \n";
  for (T row : vec)
  {
    std::cout << row << "\n";
  }
}
// get line by line from a file and create a vector with the lines
std::vector<std::string> inputFile(std::string file_path)
{

  std::ifstream input_file;
  std::string s;
  std::vector<std::string> vec;

  input_file.open(file_path);
  if (input_file)
  {
    std::cout << "External file stored.\n";
    while (getline(input_file, s))
    {
      vec.push_back(s);
    }
  }
  else
  {
    std::cout << "input file failed.\n";
  }

  printVector(vec);

  return vec;
}


//convert a int to enum State and return the correspondent string
std::string convertToState(int num)
{
  State state;
  std::string str;

  if(num == 0){
    state = State::kEmpty;
    str = "0";
  }else{
    state = State::kObstacle; 
    str = "⛰️";
  }

  return str;
}

// stream strings converting each number to a enum State
std::vector<std::vector<std::string>> createBoard(const std::vector<std::string> &str_vec)
{
  std::vector<std::vector<std::string>> board;
  
  for(std::string str : str_vec){
    std::istringstream str_stream(str);
    int n;
    char c;
    std::vector<std::string> row_vec;

    while(str_stream >> n >> c){
      row_vec.push_back(convertToState(n));
    }

    board.push_back(row_vec);    
    printVector(row_vec);    
  }

  return board;
  
}

int main()
{

  createBoard(inputFile("file_exemple.txt"));
  
  return 0;
}