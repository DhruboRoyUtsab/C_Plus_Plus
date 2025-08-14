#include<iostream>
using namespace std;
int main() {
    int Number;
    char Ch;
    cout<<"Enter a Number: "<<endl;
    cin>>Number;
    if(Number != Ch)
    {
    if (Number %2 ==0)
    {
        cout<<Number<< " is Even Number."<<endl;
    }
    else if(Number %2 ==1)
    {
        cout<<Number<< " is Odd Number." <<endl;
    }
    }
    else
    {
        cout<<"Error. Please Enter a Number."<<endl;
    }
    return 0;
}
  