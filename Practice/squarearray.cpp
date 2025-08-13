#include<iostream>
using namespace std;
void inputarray(int array[][5],int size){
    for(int i=0;i<size;i++){
        for(int j=0;j<size;j++){
            cin>>array[i][j];
        }
    }
}
void printarray(int array[][5],int size){
    cout<<"\nArray : \n";
    for(int i=0;i<size;i++){
        for(int j=0;j<size;j++){
            cout<<" "<<array[i][j];
        }
        cout<<endl;
    }
}
int sum_updown(int array[][5],int size){
    int sum1=0;
    for(int i=0;i<5;i++){
        if(i==0||i==4){
        for(int j=0;j<5;j++){
            sum1 +=array[i][j];
        }
        }
    }
     cout<<"\nSum up down : "<<sum1;
   return sum1;
}
int sum_leftright(int array[][5],int size){
        int sum2=0;
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            if(j==0 || j==4){
            sum2 +=array[i][j];
        }
        } 
    }
    cout<<"\nSum left right : "<<sum2;
     return sum2;
}
int main(){
    int array[5][5];
    inputarray(array,5);
        printarray(array,5);
         sum_updown(array,5);
        sum_leftright(array,5);
int sumleftright = sum_leftright(array,5);
int sumupdown = sum_updown(array,5);
int result = sumleftright+sumupdown;
cout<<"\nSum of all : "<<result;
}