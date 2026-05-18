#include <iostream>
using namespace std;

class Car{
    public:
    int yearBuilt;
    int capacity;
    int serialNumber;
    void run(){
        cout << "The car is running" << endl;
    }
    void brake(){
        cout<<"Car Stopped"<<endl;
    }
};
int main(){
    Car car1;
    Car car2;
    car1.yearBuilt = 1990;
    car1.capacity = 100;
    car1.serialNumber = 12345;

    car2.yearBuilt = 2021;
    car2.capacity = 4;
    car2.serialNumber = 54321;

    car1.run();
    car2.brake();
    return 0;
}