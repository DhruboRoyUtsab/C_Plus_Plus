#include<iostream>
using namespace std;
int main(){
    int x,y,z;
    cout<<"Enter 3 Integer Number: "<<endl;
    cin>>x>>y>>z;

    if(x>y && x>z)
    {
        cout<<x<<"is largest number among 3 numbers"<<endl;
        
    }
    else if(y>x && y>z)
    {
        cout<<y<<" is largest number among 3 numbers"<<endl;
    }
    else if(z>x && z>y)
    {
         cout<<z<<" is largest number among 3 numbers"<<endl;
    }
    return 0;
}