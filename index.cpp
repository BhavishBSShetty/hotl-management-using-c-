#include<iostream>
#define UNDERLINE "\033[4m"
#define CLOSEUNDERLINE "\033[0m"
using namespace std;

int main(){
    int quant;
    int choice;

    // q is quantity
    int qRooms=0,qPasta=0,qBurger=0,qNoodles=0,qShakes=0,qChicken=0;
    
    // s is sold
    int sRooms=0,sPasta=0,sBurger=0,sNoodles=0,sShakes=0,sChicken=0;

    // totalPrice price 
    int totalPriceRooms=0,totalPricePasta=0,totalPriceBurger=0,totalPriceNoodles=0,totalPriceShakes=0,totalPriceChicken=0;

    cout<<UNDERLINE<<"\nQuantity of items\n"<<CLOSEUNDERLINE;
    cout<<"\n Rooms Available : ";
    cin>>qRooms;
    cout<<"\n Quantity of Pasta : ";
    cin>>qPasta;
    cout<<"\n Quantity of Burger : ";
    cin>>qBurger;
    cout<<"\n Quantity of Noodles : ";
    cin>>qNoodles;
    cout<<"\n Quantity of Shakes : ";
    cin>>qShakes;
    cout<<"\n Quantity of Chicken-roll : ";
    cin>>qChicken;
    
    menu:
    cout<<UNDERLINE<<"\n\n Please select from the menu options \n"<<CLOSEUNDERLINE;
    cout<<"\n 1.Rooms";
    cout<<"\n 2.Pasta";
    cout<<"\n 3.Burger";
    cout<<"\n 4.Noodles";
    cout<<"\n 5.Shakes";
    cout<<"\n 6.Chicken-Roll";
    cout<<"\n 7.Information regarding sales and collection";
    cout<<"\n 8.Exit";
    cout<<"\n\n Please enter your choice : ";
    cin>>choice;

    switch(choice)
    {
        case 1:
            cout<<"\n\nEnter the number of rooms required : ";
            cin>>quant;
            if(qRooms-sRooms>=quant){
                sRooms+=quant;
                totalPriceRooms=totalPriceRooms+quant*1200;
                cout<<"\n\n\t\t"<<quant<<" room/rooms have alloted to you";
            }
            else{
                cout<<"\n\t\tOnly "<<qRooms-sRooms<<" room/rooms are availabale";
            }
            break;
        case 2:
            cout<<"\n\nEnter Pasta quantity : ";
            cin>>quant;
            if(qPasta-sPasta>=quant){
                sPasta+=quant;
                totalPricePasta=totalPricePasta+quant*200;
                cout<<"\n\n\t\t"<<quant<<"  Pasta has been order";
            }
            else{
                cout<<"\n\t\tOnly "<<qPasta-sPasta<<" plates of pasta is availabale";
            }
            break;
        case 3:
            cout<<"\n\nEnter Burger quantity : ";
            cin>>quant;
            if(qBurger-sBurger>=quant){
                sBurger+=quant;
                totalPriceBurger=totalPriceBurger+quant*150;
                cout<<"\n\n\t\t"<<quant<<" Burger has been order";
            }
            else{
                cout<<"\n\t\tOnly "<<qBurger-sBurger<<" plates of Burger is availabale";
            }
            break;
        case 4:
            cout<<"\n\nEnter Noodles quantity : ";
            cin>>quant;
            if(qNoodles-sNoodles>=quant){
                sNoodles+=quant;
                totalPriceNoodles=totalPriceNoodles+quant*100;
                cout<<"\n\n\t\t"<<quant<<" Noodles has been order";
            }
            else{
                cout<<"\n\t\tOnly "<<qNoodles-sNoodles<<" plates of Noodles is availabale";
            }
            break;
        case 5:
            cout<<"\n\nEnter Shakes quantity : ";
            cin>>quant;
            if(qShakes-sShakes>=quant){
                sShakes+=quant;
                totalPriceShakes=totalPriceShakes+quant*80;
                cout<<"\n\n\t\t"<<quant<<" Shakes has been order";
            }
            else{
                cout<<"\n\t\tOnly "<<qShakes-sShakes<<" plates of Shakes is availabale";
            }
            break;
        case 6:
            cout<<"\n\nEnter Chicken quantity : ";
            cin>>quant;
            if(qChicken-sChicken>=quant){
                sChicken+=quant;
                totalPriceChicken=totalPriceChicken+quant*200;
                cout<<"\n\n\t\t"<<quant<<" Chicken-Rolls has been order";
            }
            else{
                cout<<"\n\t\tOnly "<<qChicken-sChicken<<" plates of Chicken-Rolls is availabale";
            }
            break;
        case 7:
            cout<<UNDERLINE<<"\n\nDetails of sales and collection"<<CLOSEUNDERLINE;
            cout<<"\n\n\t\tROOMS\n";
            cout<<"\n Total number of Rooms : "<<qRooms;
            cout<<"\n Number of Rooms rented : "<<sRooms;
            cout<<"\n Remaining Rooms : "<<qRooms-sRooms;
            cout<<"\n Total Room Collection for the day: "<<totalPriceRooms;

            cout<<UNDERLINE<<"\n\n\t\tPASTA\n"<<CLOSEUNDERLINE;
            cout<<"\n Total quantity of Pasta : "<<qPasta;
            cout<<"\n Number of plates of pasta ordered : "<<sPasta;
            cout<<"\n Number of plates of pasta remaining : "<<qPasta-sPasta;
            cout<<"\n Total Pasta Collection for the day: "<<totalPricePasta;
            

            cout<<UNDERLINE<<"\n\n\t\tBURGER\n"<<CLOSEUNDERLINE;
            cout<<"\n Total quantity of Burger : "<<qBurger;
            cout<<"\n Number of plates of Burger ordered : "<<sBurger;
            cout<<"\n Number of plates of Burger remaining : "<<qBurger-sBurger;
            cout<<"\n Total Burger Collection for the day: "<<totalPriceBurger;
            

            cout<<UNDERLINE<<"\n\n\t\tNOODLES\n"<<CLOSEUNDERLINE;
            cout<<"\n Total quantity of Noodles : "<<qNoodles;
            cout<<"\n Number of plates of Noodles ordered : "<<sNoodles;
            cout<<"\n Number of plates of Noodles remaining : "<<qNoodles-sNoodles;
            cout<<"\n Total Noodles Collection for the day: "<<totalPriceNoodles;
            

            cout<<UNDERLINE<<"\n\n\t\tSHAKES\n"<<CLOSEUNDERLINE;
            cout<<"\n Total quantity of Shakes : "<<qShakes;
            cout<<"\n Number of plates of Shakes ordered : "<<sShakes;
            cout<<"\n Number of plates of Shakes remaining : "<<qShakes-sShakes;
            cout<<"\n Total Shakes Collection for the day: "<<totalPriceShakes;
            

            cout<<UNDERLINE<<"\n\n\t\tCHICKEN ROLLS\n"<<CLOSEUNDERLINE;
            cout<<"\n Total quantity of Chicken-Rolls : "<<qChicken;
            cout<<"\n Number of plates of Chicken-Rolls ordered : "<<sChicken;
            cout<<"\n Number of plates of Chicken-Rolls remaining : "<<qChicken-sChicken;
            cout<<"\n Total Chicken-Rolls Collection for the day: "<<totalPriceChicken;

            cout<<UNDERLINE<<"\n\n\t\tTOTAL\n"<<CLOSEUNDERLINE;
            cout<<"\n Total Collection of the day : "<<totalPriceRooms+totalPricePasta+totalPriceBurger+totalPriceNoodles+totalPriceShakes+totalPriceChicken;
            break;
        case 8:
            exit(0);
        default:
            cout<<"\n\tPlease select the number mentioned above!";

    }
    goto menu;




    return 0;
}
