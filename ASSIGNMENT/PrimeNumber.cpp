#include<iostream>
using namespace std;
int main(){
int number;
int count=0;
cout<<"Enter the number = "<<endl;
cin>>number;

for(int num=2;num<number;num++){
    if(number%num==0){
         count++;
    }
}
if(count==0){
    cout<<"Prime number "<<endl;
}
else{
    cout<<"Not prime number "<<endl;
}
return 0;
}