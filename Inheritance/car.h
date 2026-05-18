#ifndef CAR_H
#define CAR_H
#include<iostream>
#include<string>
using namespace std;

class Car {
    private:
    long nr;
    string producer;
    public:
    Car(long nr, string producer) {
        this->nr = nr;
        this->producer = producer;
    }
    long getNr() {
        return nr;
    }
    string getProducer() {
        return producer;
    }
    void setNr(long nr) {
        this->nr = nr;
    }
    void setProducer(string producer) {
        this->producer = producer;
    }
    void display() const;
};

class PassCar : public Car {
    private:
    string passCarType;
    bool sunRoof;
    public:
    PassCar(long nr, string producer, const string& passCarType, bool sunRoof) : Car(nr, producer) {
        this->passCarType = passCarType;
        this->sunRoof = sunRoof;
    }
   const string& getType() {
        return passCarType;
    }
    bool getSunRoof() {
        return sunRoof;
    }
    void setType(const string& passCarType) {
        this->passCarType = passCarType;
    }
    void setSunRoof(bool sunRoof) {
        this->sunRoof = sunRoof;
    }
    void display() const;
};
#endif // CAR_H