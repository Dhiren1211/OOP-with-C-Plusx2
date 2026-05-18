#ifndef _Account_
#define _Account_
#include <string>
#include <iostream>
using namespace std;
class Account
{
private:
    /* data */
    string name;
    unsigned long nr;
    double balance;

public:
    bool init(const string, unsigned long, double);
    void display();
};
#endif