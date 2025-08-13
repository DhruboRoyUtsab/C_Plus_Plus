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
    Rockstar.code.push_back("1");
    Rockstar.code.push_back("2");
    Rockstar.code.push_back("3");
    Rockstar.code.push_back("4");
    Rockstar.price.push_back(500);
    Rockstar.price.push_back(1000);
    Rockstar.price.push_back(2000);
    Rockstar.price.push_back(800);

    //Ubisoft
    Ubisoft.name.push_back("Assassin's Creed Black Flag");
    Ubisoft.name.push_back("Assassin's Creed Rogue");
    Ubisoft.name.push_back("Assassin's Creed Unity");
    Ubisoft.name.push_back("Assassin's Creed Valhalla");
    Ubisoft.code.push_back("1");
    Ubisoft.code.push_back("2");
    Ubisoft.code.push_back("3");
    Ubisoft.code.push_back("4");
    Ubisoft.price.push_back(700);
    Ubisoft.price.push_back(400);
    Ubisoft.price.push_back(500);
    Ubisoft.price.push_back(3000);

    cout<<"Enter the company name: 1.Rockstar 2.Ubisoft\n";
    int name;
    string code;
    cin>>name;
    int index;
    long long int money;
    int count;   
    switch(name){
        case 1:
cout<<"\n\n\tYou have choosen Rockstar";
    cout<<"\n\n\tHere is our Rockstar Games, Enter the code to select from Below : \n";
    for(index=0;index<Rockstar.name.size();index++){
        cout<<"\n\tGame "<<"Code: "<<Rockstar.code[index]<<"."<<Rockstar.name[index]<<" price: "<<Rockstar.price[index]<<"\n";
    }
    cin>>code;
    for(index=0;index<Rockstar.code.size();index++){
        if(code==Rockstar.code[index]){
        cout<<"\n\n\tYou have selected "<<Rockstar.name[index]<<" Price: "<<Rockstar.price[index];
                cout<<"\n\n\tPlease pay taka "<<Rockstar.price[index]<<" to buy the product ";
                cin>>money;
                 if(money==Rockstar.price[index])
                    cout<<"\n\n\tCongratulations, you have bought the product ";
                    else if(money>Rockstar.price[index])
                    cout<<"\n\n\tCongratulations,You have bought the product\n\tHere is your extra taka "<<(money-Rockstar.price[index]);
                    else if(Rockstar.price[index]>money)
                    cout<<"\n\n\tYou have to pay taka "<<(Rockstar.price[index]-money)<<" more to buy the product ";
                    else{
                        cout<<"\n\n\tError ";
                        abort();

                        }
        }
                for(index=0;index<Rockstar.code.size();index++){
                if(code!=Rockstar.code[index]){
                count++;
                }
                }
                if(count>10){
                cout<<"\n\nNo match found ";
                abort();
                }

    
    }
    break;

    case 2:
    cout<<"\n\n\tYou have choosen Ubisoft";
    cout<<"\n\n\tHere is our Ubisoft Games, Enter the code to select from Below: \n";
    for(index=0;index<Ubisoft.name.size();index++){
        cout<<"\n\tGame "<<"Code: "<<Ubisoft.code[index]<<"."<<Ubisoft.name[index]<<" price: "<<Ubisoft.price[index]<<"\n";
    }
    cin>>code;
    for(index=0;index<Ubisoft.code.size();index++){
        if(code==Ubisoft.code[index]){
        cout<<"\n\n\tYou have selected "<<Ubisoft.name[index]<<" Price: "<<Ubisoft.price[index];
        cout<<"\n\n\tPlease pay taka "<<Ubisoft.price[index]<<" to buy the product ";
                cin>>money;
                 if(money==Ubisoft.price[index])
                    cout<<"\n\n\tCongratulations, you have bought the product. ";
                    else if(money>Ubisoft.price[index])
                    cout<<"\n\n\tCongratulations,You have bought the product.\n\tHere is your extra taka "<<(money-Ubisoft.price[index]);
                    else if(Ubisoft.price[index]>money)
                    cout<<"\n\n\tYou have to pay taka "<<(Ubisoft.price[index]-money)<<" more to buy the product ";
                        else{
                        cout<<"\n\n\tError ";
                        abort();

                        }
        }
        for(index=0;index<Ubisoft.code.size();index++){
        if(code!=Ubisoft.code[index]){
        count++;
        }
        }
        if(count>4){
        cout<<"\n\nNo match found ";
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