#include<iostream>
using namespace std;
class Student
{
    private:
string name;
public:
void setName (string x)
{
    name = x;
}

string getName ()
{
    return name;
}
};

int main (){
Student Stu1;
Stu1.setName ("UTSAB") ;
cout<<Stu1.getName();
return 0;
}
