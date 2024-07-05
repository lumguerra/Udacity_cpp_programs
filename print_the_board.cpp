#include <fstream>
#include <iostream>
#include <sstream>
#include <string>
#include <vector>

template<typename T>
void printVector(std::vector<T> vec)
{

  std::cout << "Vector: \n";
  for (T str : vec)
  {
    std::cout << str << "\n";
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

  return vec;
}

// extract integers from a vector of strings into a vector of ints
std::vector<std::vector<int>> extractInts(const std::vector<std::string>& str_vec) {
    std::vector<std::vector<int>> int_vec;

    for (const std::string& str : str_vec) {
        std::istringstream str_stream(str);
        int n;
        char c;
        std::vector<int> v;

        while (str_stream >> n) {
            v.push_back(n);
            str_stream >> c; // Read the comma
        }

        int_vec.push_back(v);
        printVector(v);
    }

    return int_vec;
}

int main()
{

  extractInts(inputFile("file_exemple.txt"));

  return 0;
}