#include<iostream>
using namespace std;
class student{
    public:
int ics,ip,math;
 void avg1(int i,int ip1,int m){
        double avg = (i+ip1+m)/3;
        cout<<"\nAverage of student 1 : "<<avg;
 }
 void avg2(int i2,int ip2,int m2){
        double avg = (i2+ip2+m2)/3;
                cout<<"\nAverage of student 2 : "<<avg;
 }
};
int main(){
student s1,s2; 
cout<<"\nEnter the marks for the student 1 : ";
cout<<"'\nIP : ";
cin>>s1.ip;
cout<<"'\nICS : ";
cin>>s1.ics;
cout<<"'\nMATH : ";
cin>>s1.math;
s1.avg1(s1.ip,s1.ics,s1.math);
cout<<"\nEnter the marks for the student 2 : ";
cout<<"'\nIP : ";
cin>>s2.ip;
cout<<"'\nICS : ";
cin>>s2.ics;
cout<<"'\nMATH : ";
cin>>s2.math;
s2.avg2(s2.ip,s2.ics,s2.math);
}