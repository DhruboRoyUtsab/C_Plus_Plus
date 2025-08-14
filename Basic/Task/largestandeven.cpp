#include<iostream>
using namespace std;
int main(){
    int x,y,z;
    cout<<"Enter 3 Integer Number: "<<endl;
    cin>>x>>y>>z;

    if(x>y && x>z)
    {   
        if (x %2==0)
    {
        cout<<x<<" is largest number among 3 numbers and Even"<<endl;
    }
        else if(x %2==1)
        cout<<x<<" is largest number among 3 numbers and Odd"<<endl;
        
    }
    else if(y>x && y>z)
    {
        if (y %2==0)
    {
        cout<<y<<" is largest number among 3 numbers and Even"<<endl;
    }
        else if(y %2==1)
        cout<<y<<" is largest number among 3 numbers and Odd"<<endl;
        
    }
    else if(z>x && z>y)
    {
    if (z %2==0)
    {
        cout<<z<<" is largest number among 3 numbers and Even"<<endl;
    }
        else if(z %2==1)
        cout<<z<<" is largest number among 3 numbers and Odd"<<endl;
        
    }
    return 0;
}