#include<iostream>
#include<string.h>
#include<vector>
using namespace std;



class Games{ //Class
    public:
    vector<string>code;
vector<string>name;
vector<long long int>price;
};

int GamesCompany(){ //Function
    Games Rockstar;
    Games Ubisoft;

    Rockstar.name.push_back("Grand Theft Auto III");
    Rockstar.name.push_back("Grand Theft Auto IV");
    Rockstar.name.push_back("Grand Theft Auto V");
    Rockstar.name.push_back("Grand Theft Auto San Andreas");
    Rockstar.code.push_back("III");
    Rockstar.code.push_back("IV");
    Rockstar.code.push_back("V");
    Rockstar.code.push_back("San Andreas");
    Rockstar.price.push_back(500);
    Rockstar.price.push_back(1000);
    Rockstar.price.push_back(2000);
    Rockstar.price.push_back(800);

    //Ubisoft
    Ubisoft.name.push_back("Assassin's Creed Black Flag");
    Ubisoft.name.push_back("Assassin's Creed Rogue");
    Ubisoft.name.push_back("Assassin's Creed Unity");
    Ubisoft.name.push_back("Assassin's Creed Valhalla");
    Ubisoft.code.push_back("Black Flag");
    Ubisoft.code.push_back("Rogue");
    Ubisoft.code.push_back("Unity");
    Ubisoft.code.push_back("Valhalla");
    Ubisoft.price.push_back(700);
    Ubisoft.price.push_back(400);
    Ubisoft.price.push_back(500);
    Ubisoft.price.push_back(3000);

    cout<<"Enter the company name: 1.Rockstar 2.Ubisoft\n";
    int name;
    string code;
    cin>>name;//INT
    int index;
    long long int money; 
    int count=0;  
    switch(name){
        case 1:
    cout<<"\n\n\tYou have choosen Rockstar";
    cout<<"\n\n\tHere is our Rockstar Games, Enter the code to select from Below : ";
    for(index=0;index<Rockstar.name.size();index++){
        cout<<"\n\tGame "<<Rockstar.name[index]<<" Code : "<<Rockstar.code[index]<<" price : "<<Rockstar.price[index];
    }
    cin>>code;
    for(index=0;index<Rockstar.code.size();index++){
        if(code==Rockstar.code[index]){
        cout<<"\n\n\tYou have selected "<<Rockstar.name[index]<<" Price : "<<Rockstar.price[index];
                    count++;
    }
    if(count>=4){
        cout<<"\n\n\tError ";
        abort();
    }
  
    }
    break;

    case 2:
    cout<<"\n\n\tYou have choosen Ubisoft";
    cout<<"\n\n\tHere is our Ubisoft Games, Enter the code to select from Below : ";
    for(index=0;index<Ubisoft.name.size();index++){
        cout<<"\n\tGame "<<Ubisoft.name[index]<<" Code : "<<Ubisoft.code[index]<<" price : "<<Ubisoft.price[index];
    }
    cin>>code;
    for(index=0;index<Ubisoft.code.size();index++){
        if(code==Ubisoft.code[index]){
        cout<<"\n\n\tYou have selected "<<Ubisoft.name[index]<<" Price : "<<Ubisoft.price[index];
        count++;
    }
    if(count>=4){
        cout<<"\n\n\tError ";
        abort();

    }
    
    }
    break;

    }
}

int main(){
cout<<"\n\n\t------Welcome to Steam------";
cout<<"\n\n\tEnter your choice : ";
    GamesCompany();


}