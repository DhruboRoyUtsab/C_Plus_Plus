#include<iostream>
using namespace std;
int main(){
    int row, coloum, size;
    int a,b;
    cout<<"Enter Row, Coloum : "<<endl;
    cin>>row>>coloum;
    int array[row][coloum];
    cout<<"Enter Numbers: "<<endl;
    cin>>size;
    for(int a = 0; a<row;a++){
        for(int b=0; b<coloum; b++){
            cin>>array[a][b];
        } cout<<endl;

    }
    
    for(int i=0; i<row; i++){
        for (int j=0; j<coloum; j++){
        cout<<"A"<<i<<j<<endl;    
        cout<<array[row][coloum];
        } cout<<endl; 
    }
 
}