#include<iostream>
using namespace std;
void swapV (int a=10, int b=20){
    int temp = a;
    a=b;
    b=temp;
    cout<<"Inside swapV Function"<<endl;
    cout<<a<<endl;
    cout<<b<<endl;
    }