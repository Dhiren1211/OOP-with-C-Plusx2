#include<iostream>
#include<iomanip>
using namespace std;

int dollarexchange(){
    double rate = 1.15;
    cout<<fixed <<setprecision(2);
    cout<<"\t Euro \t Dollar";
    for(int euro =1; euro <=5; euro ++)
    cout<<"\t"<<euro <<"\t" << euro *rate <<endl;
    return 0;
}



int main(){
    int x, count = 0;
    float sum = 0.0;
    cout<<"Enter some Integers:\n (Break with any Letter)";
    while(cin>>x){
        sum +=x;
        ++count;
    }
    cout<<"Average:"<<sum/count <<endl;
    return 0;
}