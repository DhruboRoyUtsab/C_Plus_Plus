#include<iostream>
using namespace std;
    typedef struct employee {
    int eld;
    char favChar;
    float salary;
    }ep;

int main(){
    ep harry;
    struct employee shubham;
    struct employee rohanDas;
    harry.eld = 1;
    harry.favChar ='c';
    harry.salary= 12000;
    cout<<"The value is "<<harry.eld<<endl;
    cout<<"The value is "<<harry.favChar<<endl;
    cout<<"The value is "<<harry.salary<<endl;
    
}
