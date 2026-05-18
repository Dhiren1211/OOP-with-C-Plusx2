#include "car.h"
car::Car(long nr, string producer) {
    this->nr = nr;
    this->producer = producer;
}
void Car::display() const {
    cout << "Car Number: " << nr << ", Producer: " << producer << endl;
}
PassCar::PassCar(long nr, string producer, const string& passCarType, bool sunRoof) : Car(nr, producer) {
    this->passCarType = passCarType;
    this->sunRoof = sunRoof;
}
void PassCar::display() const {
    Car::display(); // Call base class display
    cout << "Passenger Car Type: " << passCarType << ", Sunroof: " << (sunRoof ? "Yes" : "No") << endl;
}
