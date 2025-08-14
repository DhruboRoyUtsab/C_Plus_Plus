#include<iostream>
using namespace std;
int main(){
    int Num1, Num2, Num3, Num4;
    cout<<"Enter 4 Integer Number: "<<endl;
    cin>>Num1>>Num2>>Num3>>Num4;

    if(Num1<Num2 && Num1<Num3 && Num1<Num4)
    {
        if(Num2<Num3 && Num2<Num4)
        {
            cout<<Num2<<" is the 2nd smallest number among 4 numbers"<<endl;
        }
        else if(Num3<Num4)
        {
            cout<<Num3<<" is the 2nd smallest number among 4 numbers"<<endl;
        }
        else
            cout<<Num4<<" is the 2nd smallest number among 4 numbers"<<endl;
    }
    else if(Num2<Num3 && Num2<Num4)
    {
        if(Num1<Num3 && Num1<Num4)
        {
            cout<<Num1<<" is the 2nd smallest number among 4 numbers"<<endl;
        }
        else if(Num3<Num4)
        {
            cout<<Num3<<" is the 2nd smallest number among 4 numbers"<<endl;
        }
        else
        cout<<Num4<<" is the 2nd smallest number among 4 numbers"<<endl;
    }
    else if(Num3<Num4)
    {
        if(Num1<Num2 && Num1<Num4)
        {
            cout<<Num1<<" is the 2nd smallest number among 4 numbers"<<endl;
        }
        else if(Num2<Num4)
        {
            cout<<Num2<<" is the 2nd smallest number among 4 numbers"<<endl;
        }
        else
        cout<<Num4<<" is the 2nd smallest number among 4 numbers"<<endl;
    }


    return 0;
}