#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    long euro, maxEuro;
    double rate;
    cout<< "\n *** TABLE OF EXCHANGE Euro-US-$ *****"<<endl;
    cout<<"Please enter rate of exchange"<<endl;
    cin>>rate;
    cout<<"Please Enter Maximum Euro:"<<endl;
    cin>>maxEuro;
    cout<<endl<<setw(12)<<"Euro"<<setw(20)<<"US-$"<<setw(10) <<"Rate: "<<rate <<endl;
    cout<<fixed <<setprecision(2)<<endl;
    long lower, upper, step;
    for(lower =1, step= 1; lower<=maxEuro; step*=10, lower = 2*step)
    for(euro = lower, upper= step*10; euro<=upper && euro<=maxEuro; euro+=step)
    cout<<setw(12)<<euro <<setw(20)<<euro*rate<<endl; 
   return 0;
}