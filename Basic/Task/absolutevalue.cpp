#include<iostream>
using namespace std;
int main() {
    int Number;
    cout<<"Enter a Number: "<<endl;
    cin>>Number;
    if(Number>0)
    {
        cout<<"The absolute value is: " <<Number<<endl;
    }
    else if(Number <0)
    { 
        Number = -Number;
        cout<<"The absolute value is: " <<Number<<endl;
    }
    return 0;
}