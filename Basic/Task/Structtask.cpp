#include<iostream>
using namespace std;

struct Student{
    string Name;
    int Roll;
    float Marks;
}S[3];


int main(){
        for(int i=0; i<3;i++){
            cout<<"Enter the Name of the Student "<<i+1<<": "<<endl;
            cin>>S[i].Name;
            cout<<"Enter the Roll of the Student "<<i+1<<": "<<endl;
            cin>>S[i].Roll;
            cout<<"Enter the Marks of the Student "<<i+1<<": "<<endl;
            cin>>S[i].Marks;
        }
        for(int i=0;i<3;i++){
        cout<<"Name of the Student "<<i+1<<" : "<<S[i].Name<<endl;
        cout<<"Roll of the Student "<<i+1<<" : "<<S[i].Roll<<endl;
        cout<<"Marks of the Student "<<i+1<<" : "<<S[i].Marks<<endl;

}

}

