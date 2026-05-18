#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    float limit, speed, tooFast;
    cout<<"\nSpeed Limit:";
    cin>>limit;
    cout<<"\nSpeed:";
    cin>>speed;
    if((tooFast = speed-limit)<10)
    cout<<"You were Lucky";
    else if(tooFast<20)
    cout<<"-40$ Fine ";
    else if(tooFast<30)
    cout<<"-80$ Fine";
    else
    cout<<"Please Kindly Hand over your Driving License";
    return 0;
}