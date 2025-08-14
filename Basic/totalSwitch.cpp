#include<iostream>
using namespace std;
int main(){
    int Total_Marks;
    int Ics, Ip, Iplab, Eng, Phyx1, PhyxLab, Math1;
    int Total_Subject;

    cout<<"Enter the of Number of Total Subject: "<<endl;
    cin>>Total_Subject;

    cout<<"Enter the Marks for Ics: "<<endl;
    cin>>Ics;
    cout<<"Enter the Marks for Ip: "<<endl;
    cin>>Ip;
    cout<<"Enter the Marks for Ip Lab: "<<endl;
    cin>>Iplab;
    cout<<"Enter the Marks for English: "<<endl;
    cin>>Eng;
    cout<<"Enter the Marks for Phyx1: "<<endl;
    cin>>Phyx1;
    cout<<"Enter the Marks for Phyx Lab: "<<endl;
    cin>>PhyxLab;
    cout<<"Enter the Marks for Math1: "<<endl;
    cin>>Math1;

    Total_Marks = Ip + Iplab + Eng + Phyx1 + PhyxLab + Math1;
    int Average;
    
    Average = ((Total_Marks)/Total_Subject);
    cout<<"Average Marks is " <<Average<<endl;

    switch(Average)
    {
        case 80 ... 100:
        cout<<"Excellent Marks."<<endl;
        break;
        case 70 ... 79:
        cout<<"Great."<<endl;
        break;
        case 60 ... 69:
        cout<<"Good."<<endl;
        break;
        case 50 ... 59:
        cout<<"Try harder."<<endl;
        break;
        case 0 ... 49:
        cout<<"You have Failed."<<endl;
        break;
        default:
        cout<<"Failed."<<endl;       
    }
    return 0;
}