#include "car.h"

int main() {
     const PassCar bettle(12345, "Bettle", "Sedan", true);
    bettle.display();
    cout<<"\n Passenger car number again: "<<bettle.getNr()<<endl;
    PassCar cabrio(54321, "Porsche", "Cabriolet", true);
    cabrio.display();
    cout<<"\n Only base class data:\n";
    cabrio.Car::display(); // Display only base class data
    return 0;
}