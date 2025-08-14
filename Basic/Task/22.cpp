#include<iostream>
#include<string>
using namespace std;

struct Student{
    int RegNo;
    string Name;
    string Dept;
    double CGPA;
}student;

void Input(Student){
    cout<<"Enter Student's Name: "<<endl;
    cin>>student.Name;
    cout<<"Enter Student's Registration number: "<<endl;
    cin>>student.RegNo;
    cout<<"Enter Student's Department: "<<endl;
    cin>>student.Dept;
    cout<<"Enter Student's CGPA: "<<endl;
    cin>>student.CGPA;        
}




void Output(const Student& student){
    cout<<"Student's Name: "<<student.Name<<endl;
    cout<<"Student's Registration number: "<<student.RegNo<<endl;
    cout<<"Student's Department: "<<student.Dept<<endl;
    cout<<"Student's CGPA: "<<student.CGPA<<endl;
}

int main(){
    Student S[5];
    for(int i; i<5;i++){
        cout<<"Student Data "<< i + 1 <<":" <<endl;
        Input(S[i]);

    }

    cout<<endl;

    for(int i; i<5;i++){
        cout<<"Students "<< i + 1 <<"Data: "<<endl;
        Output(S[i]);
        cout<<endl;


    }
    


}
