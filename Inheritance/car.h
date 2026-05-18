#ifndef CAR_H
#define CAR_H
#include <iostream>
#include <string>
using namespace std;

class Car
{
private:
    long nr;
    string producer;

public:
    Car(long nr, string producer);
    long getNr() const { return nr; }
    string getProducer() const { return producer; }
    void setNr(long nr)
    {
        this->nr = nr;
    }
    void setProducer(string producer)
    {
        this->producer = producer;
    }
    void display() const;
};

class PassCar : public Car
{
private:
    string passCarType;
    bool sunRoof;

public:
    PassCar(long nr, string producer, const string &passCarType, bool sunRoof);
    const string &getType() const { return passCarType; }
    bool getSunRoof() const { return sunRoof; }
    void setType(const string &passCarType)
    {
        this->passCarType = passCarType;
    }
    void setSunRoof(bool sunRoof)
    {
        this->sunRoof = sunRoof;
    }
    void display() const;
};
#endif // CAR_H
