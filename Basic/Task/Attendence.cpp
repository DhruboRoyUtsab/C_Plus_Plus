#include<iostream>
using namespace std;
int main() {
    int StudentAttendence;
    int NumberofClassesHeld;
    float AttendencePercentage;
    
    cout<<"Attended by student: "<<endl;
    cin>>StudentAttendence;

    cout<<"Number of classes held: "<<endl;
    cin>>NumberofClassesHeld;

    AttendencePercentage = (float)StudentAttendence / NumberofClassesHeld *100;
    cout<<AttendencePercentage<<endl;

    if (AttendencePercentage >=80)
    {
        cout<<"Student will be allowed to sit for an exam "<<endl;
    }
    else if(AttendencePercentage <=80)
    {
        cout<<"Student will not be allowed to sit for an exam" <<endl;
    }

    return 0;
}
