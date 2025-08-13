#include<iostream>
using namespace std;
int main(){
    int year;
    cout<<"Enter a year: "<<endl;
    cin>>year;
    int Year,Year1,Year2;
    Year= Year1 = (year%4==0 && year %100!=0) || year%400==0;
    
    Year = Year2 = !((year%4==0 && year %100!=0) || year%400==0);
    switch(Year)
    {
        case Year1:
        cout<<"Yeap year."<<endl;
        break;
        case Year2:
        cout<<"Not a Yeap year."<<endl;
        break;
    }
    return 0;
}   