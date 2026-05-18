#include<iostream>
using namespace std;
int main(){
    float x,y, min;
    cout<<"Enter 2 numbers:"<<endl;
    if(cin>>x && cin>>y){
        if (x < y){
            min = x;
        }
        else{
            min = y;
        }
        cout<<"The min number is:"<<min;
    }
    else
    cout<<"invalid input";
    return 0;
}