#include <iostream>

short int heuristic(short int x1,short int y1,short int x2,short int y2){
    return abs(x2 - x1) + abs(y2 - y1);
}

int main(){

    std::cout << heuristic(2, -1, 4, -7);

    return 0;
}