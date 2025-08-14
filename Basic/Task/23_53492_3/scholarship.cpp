#include<iostream>
using namespace std;

struct scholarship{
long int RegNum;
string Name;
string Dept;
double CGPA;
void output(){
    cout<<"Name : "<<Name<<endl;
    cout<<"Department Name : "<<Dept<<endl;
    cout<<"Registration number : "<<RegNum<<endl;
    cout<<"CGPA : "<<CGPA<<endl;

}
};

int main(){
scholarship student[5];
for(int i=0;i<5;i++){
    cout<<"Enter the Name of the students "<<i+1<<" : "<<endl;
    cin>>student[i].Name;
    cout<<"Enter the Dept Name "<<i+1<<" : "<<endl;
    cin>>student[i].Dept;
    cout<<"Enter the Reg number "<<i+1<<" : "<<endl;;
    cin>>student[i].RegNum;
    cout<<"Enter the CGPA "<<i+1<<" : "<<endl;
    cin>>student[i].CGPA;
}
for(int i=0;i<5;i++){
    cout<<"\nStudent "<<i+1<<" Data : "<<endl;
    student[i].output();
}
return 0;
}