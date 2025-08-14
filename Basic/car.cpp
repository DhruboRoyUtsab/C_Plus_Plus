#include<iostream>
using namespace std;
class Car{
private:
string CompanyName;
string Model;
int Year;
public:
void set(string C,string M,int Y){
    CompanyName=C;
    Model=M;
    Year=Y;
}
void print(){
    cout<<"\nNAME : "<<CompanyName<<" Model : "<<Model<<" Year : "<<Year;
}
};
int main(){
Car car1,car2,car3;
car1.set("Tesla", "Model S", 2021);
car1.print();
car2.set("BMW", "i8", 2020);
car2.print();
car3.set("Mercedes-Benz", "S-Class", 2022);
car3.print();
}