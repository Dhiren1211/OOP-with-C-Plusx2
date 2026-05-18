#include<iostream>
using namespace std;
class Person{
    public: 
    string name;
    void showName(){
        cout<<"Name: "<<name<<endl;
    }   
};
class Student:public Person{
    public:
    int rollNo;
    void showRollNo(){
        cout<<"Roll No: "<<rollNo<<endl;
    }
};
int main(){
    Student s;
    s.name = "Ali"; // Inherited from Person
    s.rollNo = 101; // Student's own member
    s.showName(); // Inherited method
    s.showRollNo(); // Student's own method
    return 0;
}