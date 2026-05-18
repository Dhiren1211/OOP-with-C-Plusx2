#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    double rate = 1.15;
    int euro =1; 
    cout<<fixed <<setprecision(2);
    cout<<"\t Euro \t Dollar\n";
    while(euro <=5 ){
    cout<<"\t"<<euro <<"\t" << euro *rate <<endl;
    euro ++;
    }
   
    return 0;
}
