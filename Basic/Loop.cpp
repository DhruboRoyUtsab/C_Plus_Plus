#include<iostream>
using namespace std;
int main(){
    for(int i = 0;i<5;i++){
        
        cout<<"*";
        
    }
    cout<<endl;
    for(int i = 1;i<=5;i++){
        
        cout<<i;
        
    }
    cout<<endl;
     for(int i= 1;i<=5;i++){
        if(i%2==0){
            cout<<'#';
        
        }
        else if(i%2==1){
            cout<<'*';
        }
        
    }
    cout<<endl;
    for(int i= 1;i<=5;i++){
        cout<<i*5;
        
    }
    cout<<endl;
         for(int i= 1;i<=5;i++){
        if(i%2==0){
            cout<<-1;
        
        }
        else if(i%2==1){
            cout<<1;
        }
        
    }
    return 0;
} 