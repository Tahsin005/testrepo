#include<bits/stdc++.h>
using namespace std;
int main(){
    int quant,choice;

    // Quantity of each items
    int Qrooms = 0, Qpasta = 0, Qburger = 0, Qnoodles = 0, QchickenRoll = 0, Qshake = 0;

    // Number of each sold items
    int Sold_rooms = 0, Sold_pasta = 0, Sold_burger = 0, Sold_noodles = 0, Sold_chickenRoll = 0, Sold_shake = 0;

    // Total prices of each items
    int price_rooms = 0, price_pasta = 0, price_burger = 0, price_noodles = 0, price_chickenRoll = 0, price_shake = 0;

    cout<<"\n\t Quantity of items we have";
    cout<<"\n Rooms we have : ";
    cin>>Qrooms;
    cout<<"\n Quantity of pasta : ";
    cin>>Qpasta;
    cout<<"\n Quantity of burgers : ";
    cin>>Qburger;
    cout<<"\n Quantity of noodles : ";
    cin>>Qnoodles;
    cout<<"\n Quantity of shake : ";
    cin>>Qshake;
    cout<<"\n Quantity of chicken rolls : ";
    cin>>QchickenRoll;

    do{
        cout<<"\n\t\t\t\t Please select from the given menu option";
        cout<<"\n 1) Rooms";
        cout<<"\n 2) Pasta";
        cout<<"\n 3) Burger";
        cout<<"\n 4) Noodles";
        cout<<"\n 5) Shake";
        cout<<"\n 6) Chicken roll";
        cout<<"\n 7) Information regarding sales and collection";
        cout<<"\n 8) Exit";
        cout<<"\n\n Please enter Your Choice : ";
        cin>>choice;
        
        switch(choice){
            case 1:
                cout<<"\n\n Enter Number of rooms you want : ";
                cin>>quant;
                if(Qrooms - Sold_rooms >= quant){
                    Sold_rooms = Sold_rooms + quant;
                    price_rooms = price_rooms + (quant*1200);
                    cout<<"\n\n\t\t"<<quant<<" room/rooms have been alotted! ";	
                }
                else{
                    cout<<"\n\tOnly "<<Qrooms - Sold_rooms<<" Rooms Remaining in hotel";
                }
                break;
                
            case 2:
                cout<<"\n\n Enter Pasta Quantity : ";
                cin>>quant;
                if(Qpasta - Sold_pasta >= quant){
                    Sold_pasta = Sold_pasta + quant;
                    price_pasta = price_pasta + (quant*250);
                    cout<<"\n\t"<<quant<<" Pasta is the order";	
                }
                else{
                    cout<<"\n\n\t\tOnly "<<Qpasta - Sold_pasta<<" Pastas Remaining in stock";
                }
                break;
                
            case 3:
                cout<<"\n\n Enter Burger Quantity : ";
                cin>>quant;
                if(Qburger - Sold_burger >= quant){
                    Sold_burger = Sold_burger + quant;
                    price_burger = price_burger + quant*50;
                    cout<<"\n\n\t\t"<<quant<<" Burger is the order";	
                }
                else{
                    cout<<"\n\tOnly "<<Qburger - Sold_burger<<" Burgers Remaining in stock";
                }
                break;
                
            case 4:
                cout<<"\n\n Enter Noodles Quantity : ";
                cin>>quant;
                if(Qnoodles - Sold_noodles >= quant){
                    Sold_noodles = Sold_noodles + quant;
                    price_noodles = price_noodles + (quant*200);
                    cout<<"\n\n\t\t"<<quant<<" Noodles is the order";	
                }
                else{
                    cout<<"\n\tOnly "<<Qnoodles - Sold_noodles<<" Noodles Remaining in stock";
                }
                break;
                
            case 5:
                cout<<"\n\n Enter Shakes Quantity : ";
                cin>>quant;
                if(Qshake - Sold_shake >= quant){
                    Sold_shake = Sold_shake + quant;
                    price_shake = price_shake + quant*170;
                    cout<<"\n\n\t\t"<<quant<<" shakes is the order";	
                }
                else{
                    cout<<"\n\tOnly "<<Qshake - Sold_shake<<" shakes Remaining in stock";
                }
                break;
                
            case 6:
                cout<<"\n\n Enter Chicken-roll Quantity : ";
                cin>>quant;
                if(QchickenRoll - Sold_chickenRoll >= quant){
                    Sold_chickenRoll = Sold_chickenRoll + quant;
                    price_chickenRoll = price_chickenRoll + quant*160;
                    cout<<"\n\n\t\t"<<quant<<" Chicken-rolls is the order";	
                }
                else{
                    cout<<"\n\tOnly "<<QchickenRoll - Sold_chickenRoll<<" Chicken-roll Remaining in stock";
                }
                break;

            case 7:
                cout<<"\n\t\tDetails of sales and collection ";
                cout<<"\n\n Number of Rooms we had : "<<Qrooms;
                cout<<"\n Number of Rooms we gave for rent : "<<Sold_rooms;
                cout<<"\n Remaining Rooms : "<<Qrooms - Sold_rooms;
                cout<<"\n\n Total Rooms collection for the Day : "<<price_rooms;
                
                cout<<"\n\n Number of Pastas we had : "<<Qpasta;
                cout<<"\n Number of Pastas we sold : "<<Sold_pasta;
                cout<<"\n Remaining Pastas : "<<Qpasta - Sold_pasta;
                cout<<"\n\n Total Pasta collection for the Day : "<<price_pasta;
                
                cout<<"\n\n Number of burgers we had : "<<Qburger;
                cout<<"\n Number of burgers we sold : "<<Sold_burger;
                cout<<"\n Remaining Burgers : "<<Qburger - Sold_burger;
                cout<<"\n\n Total Burger collection for the Day : "<<price_burger;
                
                cout<<"\n\n Number of Noodles we had : "<<Qnoodles;
                cout<<"\n Number of Noodles we sold : "<<Sold_noodles;
                cout<<"\n Remaining Noodles : "<<Qnoodles - Sold_noodles;
                cout<<"\n\n Total Noodles collection for the Day : "<<price_noodles;
                
                cout<<"\n\n Number of shakes we had : "<<Qshake;
                cout<<"\n Number of Shakes we sold : "<<Sold_shake;
                cout<<"\n Remaining Shakes : "<<Qshake - Sold_shake;
                cout<<"\n\n Total Shakes collection for the Day : "<<price_shake;
                
                cout<<"\n\n Number of Chicken-roll we had : "<<QchickenRoll;
                cout<<"\n Number of Chicken-roll we sold : "<<Sold_chickenRoll;
                cout<<"\n Remaining Chicken-roll : "<<QchickenRoll - Sold_chickenRoll;
                cout<<"\n\n Total Chicken-roll collection for the Day : "<<price_chickenRoll;
                
                cout<<"\n\n\n Total Collection for the day : "<<price_rooms + price_pasta + price_burger + price_noodles + price_shake + price_chickenRoll;
                break;
            case 8:
                exit(0);
            default:
                cout<<"\n Please select from the numbers mentioned above!";
        }
    }
    while(choice != 8);

    return 0;
}