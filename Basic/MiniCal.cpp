#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int Number1, Number2;
    char Sign;
    
    cout<<"Enter a Number: "<<endl;
    cin>>Number1;

     cout<<"Enter a Sign: "<<endl;
    cin>>Sign;
    
    cout<<"Enter another Number: "<<endl;
    cin>>Number2;

    switch(Sign)
    {
        case '+': 
        cout<<"Summation = "<<Number1+Number2<<endl;
        break;
        case '-':
        cout<<"Substraction = "<<Number1-Number2<<endl;
        break;
        case '*':
        cout<<"Mupltipication = "<< Number1*Number2<<endl;
        break;
        case '/':
        cout<<"Division = "<< float(Number1)/Number2<<endl;
        break;
        case '%':
        cout<<"Modulus = "<< Number1%Number2<<endl;
        break;
        case '^':
        cout<<"Power = "<< pow(Number1,Number2)<<endl;
        break;
        default:
        cout<<"Error"<<endl;
    }
}