#include<iostream>
using namespace std;
int main(){
    const int row=3,col=4;
    int array[3][4];
cout<<"\nEnter the elements for the array : ";
for(auto i=0;i<3;i++){
    for(auto j=0;j<4;j++){
        cin>>array[i][j];
    }
}
for(auto i=0;i<3;i++){
    for(auto j=0;j<4;j++){
        cout<<" "<<array[i][j];
    }
    cout<<endl;
}
}