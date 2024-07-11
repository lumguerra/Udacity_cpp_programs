#include <iostream>

class Car{
    public:
        std::string color{"none"};
        int distance = 0;
        int number = 0;

        Car(std::string c, int n){
            c = color;
            n = number;
        }

        void increaseDistance(){
            ++distance;
        }

        void printData(){
            std::cout << "Car " << number << ": \n";
            std::cout << "color: " << color << "\n";
            std::cout << "distance: " << distance << "\n";        
        }
};

int main(){

    Car car1("preto", 1);
    car1.increaseDistance();
    car1.printData();

    return 0;
}