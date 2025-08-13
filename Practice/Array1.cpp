#include<iostream>
using namespace std;
int main(){
    //int array[6]={5, 7, 9, 11, 13, 15};;
    int index;
    int input;
    int array[5];
    //cout<<"Enter a Number: "<<endl;
    //cin>>input;
for(int index=0;index<5;index++){
    cin>>array[index];
}
for(int index=0;index<5;index++){
    cout<<" "<<array[index]<<endl;
}
   /*for(index=0; index<=5;index++){
    if(input==array[index]){
    cout<<"Found"<<endl;
    break;
    }
    else{
        cout<<"Not Found"<<endl;
        break;
    }
    }*/
    return 0;
}
