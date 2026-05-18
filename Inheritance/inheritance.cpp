#include<iostream>
using namespace std;
class Animal{
public:
    void eat(){
        cout<<"Animal is Eating..."<<endl;
    }
};
class Dog:public Animal{
public:
    void bark(){
        cout<<"Dog is Barking..."<<endl;
    }
};
int main(){
    Dog d;
    d.eat(); // Inherited from Animal
    d.bark(); // Dog's own method
    return 0;
}