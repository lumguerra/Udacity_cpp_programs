#include <iostream>
#include <string>

// converts a enum type to a string

enum class State
{
    kEmpty,
    kObstacle
};

std::string cellString(State obj)
{
    std::string str;
    str = (obj == State::kEmpty) ? "0" : "⛰️";
    return str;
};

int main()
{
    State s{State::kObstacle};
    std::string str = cellString(s);
    std::cout << str;
    return 0;
}