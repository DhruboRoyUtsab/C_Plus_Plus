#include<iostream>
using namespace std;
int main(){
    int x1, x2, x3, x4, x5;
    x1 = 60; 
    x2 = 5; 
    x3 = 150; 
    x4 = 20;
    x5 = 55;
    int *p1, *p2, *p3, *p4, *p5;
    p1 = &x1;
    p2 = &x2;
    p3 = &x3;
    p4 = &x4;
    p5 = &x5;
    int Multiply = *p1 * *p2 * *p3 * *p4 * *p5;
    cout<<"Multipication: "<<Multiply<<endl;

}
