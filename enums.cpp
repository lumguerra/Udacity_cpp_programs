#include <iostream>

int main()
{

    enum class Direction
    {
        kUp,
        kRight,
        kDown,
        kLeft
    };

    Direction d{Direction::kUp};

    switch (d)
    {
    case Direction::kUp:
        std::cout << "Going up";
        break;

    case Direction::kRight:
        std::cout << "Going right";
        break;

    case Direction::kDown:
        std::cout << "Going down";
        break;

    case Direction::kLeft:
        std::cout << "Going left";
        break;
    }

    return 0;
}