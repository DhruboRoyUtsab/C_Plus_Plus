#include<iostream>
using namespace std;
int main(){
    int Number;
    cout<<"Enter a Integer Number: "<<endl;
    cin>>Number;

    if(Number>0)
    {
        cout<<"Number is Positive"<<endl;
    }
    else if(Number<0)
    {
        cout<<"Number is Negative"<<endl;
    }
    else if(Number==0)
    {
        cout<<"Number is Zero"<<endl;
    }
    return 0;
}