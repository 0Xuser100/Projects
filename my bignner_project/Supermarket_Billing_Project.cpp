#include <iostream>
#include<fstream>
using namespace std;
class shopping{
private:
    int pcode;
    float price;
    float dis;
    string pname;
public:
    void menu();
    void administrator();
    void buyer();
    void add();
    void edit();
    void rem();
    void list();
    void receipt();
};

void shopping ::menu() {
    A:
    int choice;
    string email;
    string password;
    cout<<"\t\t\t\t_________________________________\n";
    cout<<"\t\t\t\t                                 \n";
    cout<<"\t\t\t\t   Supermarket Main Menu         \n";
    cout<<"\t\t\t\t                                 \n";
    cout<<"\t\t\t\t_________________________________\n";
    cout<<"\t\t\t\t                                 \n";
    cout<<"\t\t\t\t|  1)Administrator               \n";
    cout<<"\t\t\t\t                                 \n";
    cout<<"\t\t\t\t|  2)Buyer                       \n";
    cout<<"\t\t\t\t                                 \n";
    cout<<"\t\t\t\t|  3)Exit                        \n";
    cout<<"\t\t\t\t                                 \n";
    cout<<"\n\t\t\t please select!";
    cin>>choice;
    switch (choice) {

        case 1:
            cout<<"\t\t\t please login \n";
            cout<<"\t\t\t Enter Email   \n";
            cin>>email;
            cout<<"\t\t\t password       \n";
            cin>>password;
            if(email=="x"&&password=="x"){
                administrator();
            }
            else
            {
                cout<<"invalid email/password";
            }
            break;
        case 2:
        {
            buyer();
        }
        case 3:
        {
            exit(0);
        }
        default:
        {
            cout<<"please select from the given options ";
        }
    }
    goto A;
}
void shopping::administrator() {
    M:
    int choice;
    cout<<"\n\n\n\t\t\t Administrator menu";
    cout<<"\n\t\t\t|____1)Add the product_____|";
    cout<<"\n\t\t\t|";
    cout<<"\n\t\t\t|____2)Modify the product_____|";
    cout<<"\n\t\t\t|";
    cout<<"\n\t\t\t|____3)Delete the product_____|";
    cout<<"\n\t\t\t|";
    cout<<"\n\t\t\t|____4)Back to main menu_____|";
    cout<<"\n\t\t\t|";

    cout<<"\n\n\t please enter your choice ";
    cin>>choice;
    switch (choice){
        case 1:
            add();
            break;
        case 2:
            edit();
            break;
        case 3:
            rem();
            break;
        case 4:
            menu();
            break;
        default:
            cout<<"invalid choice";

    }

    goto M;
}
void shopping::buyer() {
    K:
    int choice;
    cout<<"\t\t\t  Buyer \n ";
    cout<<"\t\t\t________________\n ";
    cout<<"                       \n ";
    cout<<"\t\t\t  1)Buyer product \n ";
    cout<<"                         \n";
    cout<<"\t\t\t  2)GO back         \n ";
    cout<<"\t\t\t   Enter your choice \n ";
    cin>>choice;
    switch (choice) {
        case 1:
            receipt();
            break;
        case 2:
            menu();
        default:
            cout<<"invalid choice";

    }
    goto K;
}
void shopping::add() {
    L:
    fstream data;
    int c;
    int token=0;
    float p;
    float d;
    string n;
    cout<<"\n\n\t\t\t Add new product";
    cout<<"\n\n\t product code of the product";
    cin>>pcode;
    cout<<"\n\n\t Name of the product";
    cin>>pname;
    cout<<"\n\n\t price of the product";
    cin>>price;
    cout<<"\n\n\t Discount on product";
    cin>>dis;
    data.open("database.txt",ios::in);//read mood
    if(!data){
        data.open("database.txt",ios::app|ios::out);//write mood
        data<<" "<<pcode<<" "<<pname<<" "<<price<<" "<<dis<<"\n";
        data.close();
    }
    else{
        data>>c>>n>>p>>d;
        while(!data.eof()){
            if(c==pcode){
                token++;
            }
            data>>c>>n>>p>>d;
        }
        data.close();

        if(token==1){
            cout<<"Dublicated !!!!\n";
            goto L;

        }
        else {
            data.open("database.txt", ios::app | ios::out);
            data << " " << pcode << " " << pname << " " << price << " " << dis << "\n";
            data.close();
        }
    }
    cout<<"\n\n\t\t Record inserted";
}
void shopping::edit() {
    fstream  data,data1;
    int pkey;
    int token=0;
    int c=0;
    float p;
    float d;
    string n;
    cout<<"\n\t\t\t Modify the recoed";
    cout<<"\n\t\t\t product code :";
    cin>>pkey;
    data.open("database.txt",ios::in);
    if(!data){
        cout<<"\n\nfile does not exist!";
    }
    else{
        data1.open("database1.txt", ios::app | ios::out);
        data>>pcode>>pname>>price>>dis;
        while(!data.eof())
        {
            if(pkey==pcode){
                cout<<"\n\t\t product new code";
                cin>>c;
                cout<<"\n\t\t name of the product";
                cin>>n;
                cout<<"\n\t\t price";
                cin>>p;
                cout<<"\n\t\t Discount";
                cin>>d;
                data1<<" "<<c<<" "<<n<<" "<<p<<" "<<d<<"\n";
                cout<<"\n\n\t\t Record edited";
                token++;
            }
            else{
                data1<<pcode<<" "<<pname<<" "<<price<<" "<<dis<<"\n";
            }
            data >>pcode>>pname>>price>>dis;//for increment
        }
        data.close();
        data1.close();
        remove("database.txt");
        rename("database1.txt","database.txt");
    }
    if(token==0){
        cout<<"\n\n Record not found sorry!";
    }
}
void shopping::rem() {
    fstream data,data1;
    int pkey;
    int token=0;
    cout<<"\n\n\t Delete product ";
    cout<<"\n\n\t product code :";
    cin>>pkey;
    data.open("database.txt",ios::in);
    if(!data){
        cout<<"\n\nfile does not exist!";
    }
    else{
        data1.open("database1.txt", ios::app | ios::out);
        data>>pcode>>pname>>price>>dis;
        while(!data.eof()) {
            if (pkey == pcode) {
                cout<<"\n\n\t product delete successfully";
                token++;
            }
            else{
                data1<<" "<<pcode<<" "<<pname<<" "<<price<<" "<<dis<<"\n";
            }
            data>>pcode>>pname>>price>>dis;
        }
    }
    data.close();
    data1.close();
    remove("database.txt");
    rename("database1.txt","database.txt");
    if(token==0){
        cout<<"\n\n Record not found";
    }
}
void shopping::list() {
    fstream data;
    data.open("database.txt",ios::in);
    cout<<"\n\n_______________________________________________\n";
    cout<<"proNo\t\tName\t\tprice\n";
    cout<<"\n\n________________________________________________\n";
    data>>pcode>>pname>>price>>dis;
    while (!data.eof()){
        cout<<pcode<<"\t\t"<<pname<<"\t\t"<<price<<"\n";
        data>>pcode>>pname>>price>>dis;
    }
    data.close();
}
void shopping::receipt() {
    fstream data;
    int arrc[100];
    int arrq[100];
    char choice;
    int c=0;
    float amount=0;
    float dis1=0;
    float total=0;
    cout<<"\n\n\t RECEIPT\n";
    data.open("database.txt",ios::in);
    if(!data){
        cout<<"\n\n Empty database";
    }
    else{
        data.close();
        list();
        cout<<"\n_________________________________\n";
        cout<<"\n                                 \n";
        cout<<"\n   please place the order        \n";
        cout<<"\n                                 \n";
        cout<<"\n_________________________________\n";

        do{
            m:
            cout<<"\n\nEnter product code :";
            cin>>arrc[c];
            cout<<"\n\nEnter product quantity :";
            cin>>arrq[c];
            for (int i = 0; i < c; ++i) {
                if(arrc[c]==arrc[i]){
                    cout<<"\n\n Duplicate product code.please try again!";
                    goto m;
                }
            }
            c++;
            cout<<"\n\n Do you want to buy another product? if yes \"y\" else \"n\"";
            cin>>choice;
        } while (choice=='y');
        cout<<"\n\n\t\t\t__________________RECEIPT___________________________\n";
        cout<<"\nproduct NO\t product Name\t product quantity \tprice \tAmount with discount\n";
        for (int i = 0; i <c ; ++i) {
            data.open("database.txt",ios::in);
            data>>pcode>>pname>>price>>dis;
            while(!data.eof()){
                if(pcode==arrc[i]){
                    amount=price*arrq[i];
                    dis1=amount-(amount*dis/100);
                    total=total+dis1;
                    cout<<"\n"<<pcode<<"\t\t"<<pname<<"\t\t"<<arrq[i]<<"\t\t"<<price<<"\t\t"<<amount<<"\t\t"<<dis1;
                }
                data>>pcode>>pname>>price>>dis;

            }
            data.close();
        }
        cout<<"\n\n___________________________________________________________________";
        cout<<"\n Total Amount :"<<total;



    }

}


int main( ) {
    shopping s;
    s.menu();

}