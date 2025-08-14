#include<iostream>
using namespace std;
int main(){
    int r, c;
    cin>>r>>c;
    int array[r][c];

    cout<<"\nEnter the elements for the array : ";  
    for(auto i=0;i<r;i++){
        for(auto j=0;j<c;j++){
            cin>>array[i][j];
        }
    }
    for(auto i=0;i<r;i++){
        for(auto j=0;j<c;j++){
            cout<<" "<<array[i][j];
        }
    cout<<endl;
    }
}

