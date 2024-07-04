#include <iostream>
#include <sstream>
#include <string>
#include <vector>

using std::cout;
using std::ifstream;
using std::istringstream;
using std::string;
using std::vector;
// TODO: Add the ParseLine function here.

int main() {

  string s{"1, 2, 3, 4, 5, 6 "};

  istringstream input_string(s);
  vector<int> v;
  int n;
  char c;
  char j;

  while(input_string >> n >> c){
    v.push_back(n);
  }

  for (int i : v) {
    cout << i << "\n";
  }

  return 0;
}