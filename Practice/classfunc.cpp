#include<iostream>
#include<string.h>
using namespace std;
#include<vector>

class Store{ //Class
    public:
    string name;
    int price;
    int money;


    void Display(){ //Function to Display for all product Info
        cout<<"You want to bought "<<name<< " which price is: $"<<price<<endl;
        cout<<"Please pay $"<<price<<" to buy the Product:\n";
        cin>>money;
        if(money == price){
            cout<<"Congratulations, you have bought "<<name<<". Thank you, Visit us again.\n";    
        }
        else if(money>price){
            int change = money - price;
            cout<<"Congratulations, you have bought "<<name<<". Here is your change $"<<change<<".Thank you, Visit us again.\n";    
        }
        else if(money<price){
            int change = price - money;
            cout<<"Sorry, you have to pay $"<<change<<" more to buy "<<name<<".\n";
            money = change; 
            cin>>money;
            if(money == change){
            cout<<"Congratulations, you have bought "<<name<<". Visit us again.\n";      
            }
        }
    }

};

int main(){
    Store laptop; //object
    Store GraphicsCard;
    Store Motherboard;
    Store Monitor;
    Store Processsor;
    Store Ram;
    Store SSD;
    Store Cooler;
    Store Casing;

    string ProductName;

    cout<<"__________________Welcome to our Store__________________________\n"
    "We are offering Laptop, Graphics Card, Motherboard, Monitor, Processor, Ram, SSD, Cooler, Casing\n";

    cout<<"Please select which you like to buy: "<<endl;
    cin>>ProductName;

    if(ProductName == "Laptop"){
    laptop.name= "Asus Tuf Gaming F15";
    laptop.price = 150;
    laptop.Display();
    }
    else if(ProductName == "Graphics Card"){
    GraphicsCard.name= "RTX 4080 Ti";
    GraphicsCard.price = 250;
    GraphicsCard.Display();
    }
    else if(ProductName == "Monitor"){
    Monitor.name= "Asus Curve Monitor";
    Monitor.price = 80;
    Monitor.Display();
    }

    else if(ProductName == "Motherboard"){
    Monitor.name= "Asus ROG Strix";
    Monitor.price = 40;
    Monitor.Display();
    }
    else if(ProductName == "Processor"){
    Monitor.name= "I9 14000K";
    Monitor.price = 58;
    Monitor.Display();
    }
    else if(ProductName == "Ram"){
    Monitor.name= "Corsair Ddr5 6800 mhz 16 gb Ram";
    Monitor.price = 9;
    Monitor.Display();
    }

    else if(ProductName == "SSD"){
    Monitor.name= "Samsung 980 Pro 2 TB SSD";
    Monitor.price = 25 ;
    Monitor.Display();
    }
    
    else if(ProductName == "Cooler"){
    Monitor.name= "Asus ROG Strix Cooler";
    Monitor.price = 25 ;
    Monitor.Display();
    }
    
    else if(ProductName == "Casing"){
    Monitor.name= "Nzxt White Casing";
    Monitor.price = 12;
    Monitor.Display();
    }




    else {
        cout<<"Sorry, The product you selected is not available at this moment";
    }

}