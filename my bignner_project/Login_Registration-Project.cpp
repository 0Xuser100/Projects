#include<iostream>
#include<fstream>
#include <string.h>
using namespace std;
void showmenue(){

    cout<<"\t\t\t_____________________________________________________________________________________\n\n\n";
    cout<<"\t\t\t                                    welcome to login page                             \n\n\n";
    cout<<"\t\t\t____________________________________    MENU           ___________________________________\n\n";
    cout<<"                                                                                                   \n\n";
    cout<<"\t| press 1 to login                        |\n";
    cout<<"\t| press 2 to register                     |\n";
    cout<<"\t| press 3 if you forget your password     |\n";
    cout<<"\t| press 4 to exit                         |\n";
    cout<<"\n\t\t\t please enter your choice :";

}
void login();
void registration();
void forgot();

int main() {
     system("color E");
    showmenue();
    int c;
    cin>>c;
    switch (c) {
        case 1:
            login();
            break;
        case 2:
            registration();
            break;
        case 3:
            forgot();
            break;
        case 4:
            cout<<"\t\t\t thankyou! \n\n";
            exit(0);
        default:
            system("cls");
            cout<<"\t\t\t please select from the options given above \n";
            main();
    }
}
void login(){
    int count=0 ;
    string userid,password,id,pass;
    system("cls");
    cout<<"\t\t\t please enter the username and password : "<<endl;
    cout<<"\t\t\t username  : ";
    cin>>userid;
    cout<<"\t\t\t password  : ";
    cin>>password;

    ifstream input("D:/compile/data.txt");

    while(input>>id>>pass){
        if(id==userid&&pass==password){
            count =1;
            system("cls");

        }
    }
    input.close();
    if(count==1){
        cout<<userid<<"  your login is successfull,thanks for loggin in !"<<endl;

        main();
    }
    else
    {
        cout<<" login error,please chec your username and password "<<endl;
        main();
    }

}
void registration(){
    string ruserid,rpassword,rid,rpass;
    system("cls");
    cout<<"\t\t\tplease enter the username : ";
    cin>>ruserid;
    cout<<"\t\t\t please enter the password :  ";
    cin>>rpassword;
    ofstream f1("D:/compile/data.txt",ios::app);
    f1<<ruserid<<' '<<rpassword<<"\n";
    f1.close();
    system("cls");
    cout<<"\n\t\t registration is successfull ! "<<endl;
    main();

}
void forgot (){
    int option;
    system("cls");
    cout<<"\t\t\t you forgot the password ? no worries \n";
    cout<<"press 1 to search id by username \n";
    cout<<"press 2 to go back to the main menu \n";
    cout<<"\t\t\t enter your choice :";
    cin>>option;
    switch (option) {
        case 1:{
            int count =0;
            string suserid,sid,spass;
            cout<<"\n\t\t enter the username which you remembered :";
            cin>>suserid;
            ifstream f2("D:/compile/data.txt");
            while(f2>>sid>>spass){
                if(sid==suserid){
                    count=1;
                }
            }
            f2.close();
            if(count==1){
                cout<<"\n\n your account is found! "<<endl;
                cout<<"\n\n your password is : "<<spass;
                main();
            }
            else {
                cout << "\n\t sorry ! your account is not found"<<endl;
                main();
            }    }
        case 2:{
            main();
        }
        default:
            cout<<"\t\t\t wrong choice !please try again \n";
            forgot();

    }
}
