#include<iostream>
using namespace std;
int main(){
        int array[2][2];
        int array2[2][2];
        int Addition=0;
cout<<"Enter the elements for the Array1 : "<<endl;
for(int i=0;i<2;i++){
    for(auto j=0;j<2;j++){
        cin>>array[i][j];
    }
}

cout<<"Enter the elements for the Array2 : "<<endl;
for(auto i=0;i<2;i++){
    for(int j=0;j<2;j++){
        cin>>array2[i][j];
    }
}
cout<<"Array 1 : "<<endl;
for(int i=0;i<2;i++){
    for(int j=0;j<2;j++){
        cout<<" "<<array[i][j];
    }
    cout<<endl;
}
cout<<"Array 2 : "<<endl;
for(int i=0;i<2;i++){
    for(int j=0;j<2;j++){
        cout<<" "<<array2[i][j];
    }
    cout<<endl;
}
cout<<"The Addition of two Matrices is: "<<endl;
for(int i=0;i<2;i++){
    for(int j=0;j<2;j++){
        Addition = array[i][j] + array2[i][j];
        cout<<" "<<Addition;
    }
    cout<<endl;
}

}