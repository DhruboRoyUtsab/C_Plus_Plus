#include<iostream>
using namespace std;
int main() {
    int year;
    cout<<"Enter a year: "<<endl;
    cin>>year;

    //if (year%4==0 && ( year%400==0 || year %100!=0))
    if ((year%4==0 && year %100!=0) || year%400==0)
    {
    cout<<"It's a Leapyear"<<endl;
    } 
    else
    {
        cout<<"It's a not Leapyear "<<endl;
    }
    return 0;
}