#include<iostream>
using namespace std;
int main(){
cout<<"Enter the Room Number = "<<endl;
int number;//= 3104;
int number2;
cin>>number;
int Roomnumber = number%100;
cout<<"Room No = "<<Roomnumber<<endl;

number2 = number/100;
int floor = number2%10;
cout<<"Floor No = "<<floor<<endl;

int annex = number/1000;
cout<<"Annex No = "<<annex<<endl;
return 0;
}

