#include<bits/stdc++.h>
using namespace std;
int main() {
    system("color E");
    system("cls");

    int quant,choice ;
    int  qrooms =0,qpasta=0,qburger=0,qnoodles=0,qshake=0,qchicken=0 ;
    int  sqrooms =0,sqpasta=0,sqburger=0,sqnoodles=0,sqshake=0,sqchicken=0 ;
    int total_rooms=0,total_pasta=0,total_burger=0,total_noodles=0,total_shake=0,total_chicken=0;

    cout<<"\n\t Quantiti of item we have ";
    cout<<"\n rooms available :";
    cin>>qrooms;
    cout<<"\n quantity of pasta :";
    cin>>qpasta;
    cout<<"\n quantity of burger";
    cin>>qburger;
    cout<<"\n quantity of noodles";
    cin>>qnoodles;
    cout<<"\n quantity of shake";
    cin>>qshake;
    cout<<"\n quantity of chicken";
    cin>>qchicken;
    A:
    cout<<"\n\t\t\t please select from menu options ";
    cout<<"\n\n1) rooms ";
    cout<<"\n2) pasta";
    cout<<"\n3) purger";
    cout<<"\n4) noodles";
    cout<<"\n5) shake";
    cout<<"\n6) Chicken";
    cout<<"\n7)information regarding sales and collection";
    cout<<"\n8)exit";

    cout<<"\n\n please enter your choice :";
    cin>>choice;
    switch (choice) {
        case 1:
            cout<<"\n\n please enter the number of rooms you want :";
            cin>>quant;
            if(qrooms-sqrooms>=quant) {
                sqrooms = sqrooms + quant;
                total_rooms = total_rooms + quant * 1200;
                cout << "\n\n\t\t" << quant << "room/rooms have been alloted to you";
            }
            else{
                cout<<"\n\tonly"<<qrooms-sqrooms<<"rooms remaining in hotel";
            }
            break;

        case 2:
            cout<<"\n\n please enter quantity of pasta  you want :";
            cin>>quant;
            if(qpasta-sqpasta>=quant) {
                sqpasta = sqpasta + quant;
                total_pasta = total_pasta + quant * 250;
                cout << "\n\n\t\t" << quant << "pasta is the order!";
            }
            else{
                cout<<"\n\tonly"<<qpasta-sqpasta<<"pasta remaining in hotel";
            }
            break;



        case 3:
            cout<<"\n\n please enter quantity of burger  you want :";
            cin>>quant;
            if(qburger-sqburger>=quant) {
                sqburger = sqburger + quant;
                total_burger = total_burger + quant * 150;
                cout << "\n\n\t\t" << quant << "burger is the order!";
            }
            else{
                cout<<"\n\tonly"<<qburger-sqburger<<"burger remaining in hotel";
            }
            break;


        case 4:
            cout<<"\n\n please enter quantity of noodeles  you want :";
            cin>>quant;
            if(qnoodles-sqnoodles>=quant) {
                sqnoodles = sqnoodles + quant;
                total_noodles = total_noodles + quant * 100;
                cout << "\n\n\t\t" << quant << "noodeles is the order!";
            }
            else{
                cout<<"\n\tonly"<<qnoodles-sqnoodles<<"noodeles remaining in hotel";
            }
            break;

        case 5:
            cout<<"\n\n please enter quantity of shake  you want :";
            cin>>quant;
            if(qshake-sqshake>=quant) {
                sqshake = sqshake + quant;
                total_shake = total_shake + quant * 200;
                cout << "\n\n\t\t" << quant << "shake is the order!";
            }
            else{
                cout<<"\n\tonly"<<qshake-sqshake<<"shake remaining in hotel";
            }
            break;


        case 6:
            cout<<"\n\n please enter quantity of chicken  you want :";
            cin>>quant;
            if(qchicken-sqchicken>=quant) {
                sqchicken = sqchicken + quant;
                total_chicken = total_chicken + quant * 150;
                cout << "\n\n\t\t" << quant << "chicken is the order!";
            }
            else{
                cout<<"\n\tonly"<<qchicken-sqchicken<<"chicken remaining in hotel";
            }
            break;



        case 7:
            cout<<"\n\t\tdetails of sales and collection ";
            cout<<"\n\n number of rooms we had : "<<qrooms;
            cout<<"\n\n number of room we gave for rent :"<<sqrooms;
            cout<<"\n\n remaining rooms : "<<qrooms-sqrooms;
            cout<<"\n\n total rooms collection for the day : "<<total_rooms;


            cout<<"\n\n number of past we had : "<<qpasta;
            cout<<"\n\n number of pasta we sold:"<<sqpasta;
            cout<<"\n\n remaining pasta : "<<qpasta-sqpasta;
            cout<<"\n\n total pasta collection for the day : "<<total_pasta;


            cout<<"\n\n number of burger we had : "<<qburger;
            cout<<"\n\n number of burger we sold:"<<sqburger;
            cout<<"\n\n remaining burger : "<<qburger-sqburger;
            cout<<"\n\n total burger  collection for the day : "<<total_burger;


            cout<<"\n\n number of noodeles we had : "<<qnoodles;
            cout<<"\n\n number of noodeles we sold:"<<sqnoodles;
            cout<<"\n\n remaining noodeles : "<<qnoodles-sqnoodles;
            cout<<"\n\n total noodeles collection for the day : "<<total_noodles;

            cout<<"\n\n number of shake we had : "<<qshake;
            cout<<"\n\n number of shake we sold:"<<sqshake;
            cout<<"\n\n remaining shake : "<<qshake-sqshake;
            cout<<"\n\n total shake collection for the day : "<<total_shake;

            cout<<"\n\n number of chicken we had : "<<qchicken;
            cout<<"\n\n number of chicken we sold:"<<sqchicken;
            cout<<"\n\n remaining chickn : "<<qchicken-sqchicken;
            cout<<"\n\n total chicken collection for the day : "<<total_chicken;
            cout <<"\n\n\n  total collection for the day : "<<total_rooms+total_pasta+total_shake+total_chicken+total_noodles+total_burger;

        case 8:
            exit(0);
        default:
            cout<<"\n please select the numbers mentioned above !";

    }
    goto A;
}
