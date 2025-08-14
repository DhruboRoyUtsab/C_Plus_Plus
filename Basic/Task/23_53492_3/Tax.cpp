#include<iostream>
using namespace std;
double Tax(double &tax,double &Price){
    tax = (Price*(tax/100));
    return tax;
}
double Price(double &tax,double &Price){
Price = tax+Price;
return Price;
}

int main(){
    cout<<"Enter the price & the tax rate : "<<endl;
    double price,TaxRate;
    cin>>price>>TaxRate;
    cout<<"Price : "<<price<<endl;
    Tax(TaxRate,price);
   cout<<"Tax : "<<TaxRate<<endl;
   Price(TaxRate,price);
   cout<<"Total Price with Tax: "<<price<<endl;
}