#include<iostream>
using namespace std;
int main() {
    int year;
    cout<<"Enter a year: "<<endl;
    cin>>year;

    if (year %4==0)
    {

    if(year %400==0)
    {
        
    }
    if(year %100!=0)
    {
        
    }
    cout<<"It's Leapyear"<<endl;
    }
    else
    {
        cout<<"It's not Leapyear "<<endl;
    }
    return 0;
}
   