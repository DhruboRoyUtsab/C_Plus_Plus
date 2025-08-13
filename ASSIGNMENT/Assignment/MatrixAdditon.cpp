/*Write a C++ Program for matrix addition using 2D Array*/
#include<iostream>
using namespace std;
int main(){
    int r, c;
    cout<<"Enter the Row and Column of the Matrix: "<<endl;
    cin>>r>>c;
        int Array[r][c];
        int Array2[r][c];
        int Add=0;
cout<<"Enter the elements for the Array1 : "<<endl;
for(auto i=0;i<r;i++){
    for(auto j=0;j<c;j++){
        cin>>Array[i][j];
    }
}

cout<<"Enter the elements for the Array2 : "<<endl;
for(auto i=0;i<r;i++){
    for(auto j=0;j<c;j++){
        cin>>Array2[i][j];
    }
}
cout<<"Array 1: "<<endl;
for(auto i=0;i<r;i++){
    for(auto j=0;j<c;j++){
        cout<<" "<<Array[i][j];
    }
    cout<<endl;
}
cout<<"Array 2: "<<endl;
for(auto i=0;i<r;i++){
    for(auto j=0;j<c;j++){
        cout<<" "<<Array2[i][j];
    }
    cout<<endl;
}
cout<<"Addition of two Matrices: "<<endl;
for(auto i=0;i<r;i++){
    for(auto j=0;j<c;j++){
        Add = Array[i][j] + Array2[i][j];
        cout<<" "<<Add;
    }
    cout<<endl;
}

}