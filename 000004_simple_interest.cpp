#include<iostream>
using namespace std;

    int main()
{
    float principal,rate,time,simpleinterest;

    cout<<"enter principle ";
    cin>>principal;
    
    cout<<"enter rate of intrest : " ;
    cin>>rate;

    cout<<"enter time (in years ): " ;
    cin>>time;

    simpleinterest = (principal * rate * time )/100.0;

    cout<<"simple interest = " << simpleinterest <<endl;

    return 0;
}    