#include<iostream>
using namespace std;
struct Student{
    string name;
    int age;
    float grade;

};
int main(){
    Student s1;
    s1.name = "John";
    s1.age = 20;
    s1.grade = 85.5;

    //Reference
    Student &ref = s1;

    Student *ptr = &s1;
//Using reference
    cout << "Using Reference:" << endl;
    cout << "Name: " << ref.name << endl;
    cout << "Age: " << ref.age << endl;
    cout << "Grade: " << ref.grade << endl;

    //Using pointer
    cout << "Using Pointer:" << endl;
    cout << "Name: " << ptr->name << endl;
    cout << "Age: " << ptr->age << endl;
    cout << "Grade: " << ptr->grade << endl;

    cout<<"Address of s1: " << &s1 << endl;
    return 0;
}