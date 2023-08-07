#include<iostream>
#include <fstream>
#include <iomanip>
using namespace std;
void mainmenu();

class management
{
public:
    management(){
        mainmenu();
    }

};

class Detail{
public:
    static string name,gendr;
    int phoneNo;
    int age;
    string add;
    static int cID;
    char arr[100];
    void information(){
        cout<<"\n Enter the customer ID :";
        cin>>cID;
        cout<<"\nEnter the name :";
        cin>>name;
        cout<<"\nEnter the age :";
        cin>>age;
        cout<<"\n Address :";
        cin>>add;
        cout<<"\n Gendeer :";
        cin>>gendr;
        cout<<"your details are saved with us \n";
    }
};
int Detail::cID;
string Detail::name;
string Detail::gendr;

class registration{
public:
    static int choice;
    int choice1;
    int back;
    static float charges;

    void flight(){
        string flightN[]={"DUBAI","CANADA","UK","USA","AUSTORALIA","EUROPE"};

        for (int i = 0; i <6 ; ++i) {
            cout<<i+1<<".flight to "<<flightN[i]<<endl;
        }
        cout<<"\n welcome to the airlines!"<<endl;
        cout<<"press ther number pf the country of which you want to book the flight :";
        cin>>choice;
        switch (choice) {

            case 1: {
                cout << "_________________________________Welcome to Dubai Emirates__________________________\n"
                     << endl;
                cout << "your comfort is our priority .enjoy the journey!" << endl;
                cout << "following are  the flights \n" << endl;

                cout << "1.DUB -498 " << endl;
                cout << "\t08-01-2022 8:00 AM 10 hrs Rs 15000" << endl;
                cout << "2.DUB -234 " << endl;
                cout << "\t09-01-2022 8:00 AM 12 hrs Rs 12000" << endl;
                cout << "3.DUB -008 " << endl;
                cout << "\t14-01-2022 8:00 AM 3 hrs Rs 1000" << endl;

                cout << "\n select the flight you want to book :";
                cin >> choice1;
                if (choice1 == 1) {
                    charges = 15000;
                    cout << "\n You have successfully booked the flight DUB -498" << endl;
                    cout << "\n You can go back to menu and take ticket " << endl;

                } else if (choice1 == 2) {
                    charges = 12000;
                    cout << "\n You have successfully booked the flight DUB -234" << endl;
                    cout << "\n You can go back to menu and take ticket " << endl;
                } else if (choice1 == 3) {
                    charges = 1000;
                    cout << "\n You have successfully booked the flight DUB -008" << endl;
                    cout << "\n You can go back to menu and take ticket " << endl;
                } else {
                    cout << "Invalid input , shifting to the previous menu " << endl;
                    flight();
                }
                cout << "press any key to go back to the main menu :" << endl;
                cin >> back;
                if (back == 1) {
                    mainmenu();

                } else {
                    mainmenu();
                }
            }

            case 2:{

                cout << "_________________________________Welcome to Candian Airlines __________________________\n"<< endl;
                cout << "your comfort is our priority .enjoy the journey!" << endl;
                cout << "following are  the flights \n" << endl;

                cout << "1.CA -498 " << endl;
                cout << "\t08-01-2022 8:00 AM 10 hrs Rs 100000" << endl;
                cout << "2.CA -234 " << endl;
                cout << "\t09-01-2022 8:00 AM 12 hrs Rs 60000" << endl;
                cout << "3.CA -008 " << endl;
                cout << "\t14-01-2022 8:00 AM 3 hrs Rs 40000" << endl;

                cout << "\n select the flight you want to book :";
                cin >> choice1;
                if (choice1 == 1) {
                    charges = 100000;
                    cout << "\n You have successfully booked the flight CA -498" << endl;
                    cout << "\n You can go back to menu and take ticket " << endl;

                } else if (choice1 == 2) {
                    charges = 60000;
                    cout << "\n You have successfully booked the flight CA -234" << endl;
                    cout << "\n You can go back to menu and take ticket " << endl;
                } else if (choice1 == 3) {
                    charges = 40000;
                    cout << "\n You have successfully booked the flight CA -008" << endl;
                    cout << "\n You can go back to menu and take ticket " << endl;
                } else {
                    cout << "Invalid input , shifting to the previous menu " << endl;
                    flight();
                }
                cout << "press any key to go back to the main menu :" << endl;
                cin >> back;
                if (back == 1) {
                    mainmenu();

                } else {
                    mainmenu();
                }

            }


            case 3:{

                cout << "_________________________________Welcome to UK __________________________\n"<< endl;
                cout << "your comfort is our priority .enjoy the journey!" << endl;
                cout << "following are  the flights \n" << endl;

                cout << "1.UK -498 " << endl;
                cout << "\t08-01-2022 8:00 AM 10 hrs Rs 100000" << endl;
                cout << "2.UK -234 " << endl;
                cout << "\t09-01-2022 8:00 AM 12 hrs Rs 60000" << endl;
                cout << "3.UK -008 " << endl;
                cout << "\t14-01-2022 8:00 AM 3 hrs Rs 40000" << endl;

                cout << "\n select the flight you want to book :";
                cin >> choice1;
                if (choice1 == 1) {
                    charges = 100000;
                    cout << "\n You have successfully booked the flight UK -498" << endl;
                    cout << "\n You can go back to menu and take ticket " << endl;

                } else if (choice1 == 2) {
                    charges = 60000;
                    cout << "\n You have successfully booked the flight UK -234" << endl;
                    cout << "\n You can go back to menu and take ticket " << endl;
                } else if (choice1 == 3) {
                    charges = 40000;
                    cout << "\n You have successfully booked the flight UK -008" << endl;
                    cout << "\n You can go back to menu and take ticket " << endl;
                } else {
                    cout << "Invalid input , shifting to the previous menu " << endl;
                    flight();
                }
                cout << "press any key to go back to the main menu :" << endl;
                cin >> back;
                if (back == 1) {
                    mainmenu();

                } else {
                    mainmenu();
                }

            }


            case 4:{

                cout << "_________________________________Welcome to US __________________________\n"<< endl;
                cout << "your comfort is our priority .enjoy the journey!" << endl;
                cout << "following are  the flights \n" << endl;

                cout << "1.US -498 " << endl;
                cout << "\t08-01-2022 8:00 AM 10 hrs Rs 100000" << endl;
                cout << "2.US -234 " << endl;
                cout << "\t09-01-2022 8:00 AM 12 hrs Rs 60000" << endl;
                cout << "3.US -008 " << endl;
                cout << "\t14-01-2022 8:00 AM 3 hrs Rs 40000" << endl;

                cout << "\n select the flight you want to book :";
                cin >> choice1;
                if (choice1 == 1) {
                    charges = 100000;
                    cout << "\n You have successfully booked the flight US -498" << endl;
                    cout << "\n You can go back to menu and take ticket " << endl;

                } else if (choice1 == 2) {
                    charges = 60000;
                    cout << "\n You have successfully booked the flight US -234" << endl;
                    cout << "\n You can go back to menu and take ticket " << endl;
                } else if (choice1 == 3) {
                    charges = 40000;
                    cout << "\n You have successfully booked the flight US -008" << endl;
                    cout << "\n You can go back to menu and take ticket " << endl;
                } else {
                    cout << "Invalid input , shifting to the previous menu " << endl;
                    flight();
                }
                cout << "press any key to go back to the main menu :" << endl;
                cin >> back;
                if (back == 1) {
                    mainmenu();

                } else {
                    mainmenu();
                }

            }

            case 5:{

                cout << "_________________________________Welcome to  AUSTORALIA Airlines __________________________\n"<< endl;
                cout << "your comfort is our priority .enjoy the journey!" << endl;
                cout << "following are  the flights \n" << endl;

                cout << "1.AUSTORALIA -498 " << endl;
                cout << "\t08-01-2022 8:00 AM 10 hrs Rs 100000" << endl;
                cout << "2.AUSTORALIA -234 " << endl;
                cout << "\t09-01-2022 8:00 AM 12 hrs Rs 60000" << endl;
                cout << "3.AUSTORALIA -008 " << endl;
                cout << "\t14-01-2022 8:00 AM 3 hrs Rs 40000" << endl;

                cout << "\n select the flight you want to book :";
                cin >> choice1;
                if (choice1 == 1) {
                    charges = 100000;
                    cout << "\n You have successfully booked the flight AUSTORALIA -498" << endl;
                    cout << "\n You can go back to menu and take ticket " << endl;

                } else if (choice1 == 2) {
                    charges = 60000;
                    cout << "\n You have successfully booked the flight AUSTORALIA -234" << endl;
                    cout << "\n You can go back to menu and take ticket " << endl;
                } else if (choice1 == 3) {
                    charges = 40000;
                    cout << "\n You have successfully booked the flight AUSTORALIA -008" << endl;
                    cout << "\n You can go back to menu and take ticket " << endl;
                } else {
                    cout << "Invalid input , shifting to the previous menu " << endl;
                    flight();
                }
                cout << "press any key to go back to the main menu :" << endl;
                cin >> back;
                if (back == 1) {
                    mainmenu();

                } else {
                    mainmenu();
                }

            }



            case 6:{

                cout << "_________________________________Welcome to  EUROPE Airlines __________________________\n"<< endl;
                cout << "your comfort is our priority .enjoy the journey!" << endl;
                cout << "following are  the flights \n" << endl;

                cout << "1.EUROPE -498 " << endl;
                cout << "\t08-01-2022 8:00 AM 10 hrs Rs 100000" << endl;
                cout << "2.EUROPE-234 " << endl;
                cout << "\t09-01-2022 8:00 AM 12 hrs Rs 60000" << endl;
                cout << "3.EUROPE -008 " << endl;
                cout << "\t14-01-2022 8:00 AM 3 hrs Rs 40000" << endl;

                cout << "\n select the flight you want to book :";
                cin >> choice1;
                if (choice1 == 1) {
                    charges = 100000;
                    cout << "\n You have successfully booked the flight EUROPE -498" << endl;
                    cout << "\n You can go back to menu and take ticket " << endl;

                } else if (choice1 == 2) {
                    charges = 60000;
                    cout << "\n You have successfully booked the flight EUROPE -234" << endl;
                    cout << "\n You can go back to menu and take ticket " << endl;
                } else if (choice1 == 3) {
                    charges = 40000;
                    cout << "\n You have successfully booked the flight  EUROPE -008" << endl;
                    cout << "\n You can go back to menu and take ticket " << endl;
                } else {
                    cout << "Invalid input , shifting to the previous menu " << endl;
                    flight();
                }
                cout << "press any key to go back to the main menu :" << endl;
                cin >> back;
                if (back == 1) {
                    mainmenu();

                } else {
                    mainmenu();
                }

            }
            default:{
                cout<<"invalid input ,shifting you to the main menu !"<<endl;
                mainmenu();
                break;
            }
        }

    }};
float registration::charges;
int registration::choice;

class ticket :public registration,Detail{
public:
    void Bill() {
        string destination = " ";
        ofstream outf("D:/untitled/records.txt");
        {
            outf << "_________________________XXX Airlines_______________ " << endl;
            outf << "____________________________Ticket____________________" << endl;
            outf << "______________________________________________________" << endl;
            outf << "customer ID: " << Detail::cID << endl;
            outf << "customer Name:" << Detail::name << endl;
            outf << "customer Gender: " << Detail::gendr << endl;
            outf << "\tDescription" << endl << endl;
            if (registration::choice == 1) {
                destination = "DUBAI";
            }
            if (registration::choice == 2) {
                destination = "CANADA";
            }
            if (registration::choice == 3) {
                destination = "UK";
            }
            if (registration::choice == 4) {
                destination = "USA";
            }
            if (registration::choice == 5) {
                destination = "AUSTORALIA";
            }
            if (registration::choice == 6) {
                destination = "EUROPE";
            }
            outf<<"Destination\t\t"<<destination<<endl;
            outf<<"fight cost :\t\t"<<registration::charges<<endl;
        }
        outf.close();
    }
    void display(){
        ifstream ifs("D:/untitled/records.txt");
        {
            if(!ifs){
                cout<<"file error!"<<endl;

            }
            while(!ifs.eof()){//eof=end of file
                ifs.getline(arr,100);
                cout<<arr<<endl;
            }
        }
        ifs.close();
    }

};
void mainmenu(){
    int lchoice;
    int back;
    cout<<"\t               XXX Airlines  \n"<<endl;
    cout<<"\t______________Main menu________________"<<endl;
    cout<<"\t__________________________________________________"<<endl;
    cout<<"\t|\t\t\t\t\t\t|"<<endl;
    cout<<"\t|\t press 1 to add custmer Details \t|"<<endl;
    cout<<"\t|\t press 2 for flight Registration \t|"<<endl;
    cout<<"\t|\t press 3 for Ticket and charges \t|"<<endl;
    cout<<"\t|\t press 4 to Exit \t|"<<endl;
    cout<<"\t______________________________________________________________________"<<endl;
    cout<<"\t|\t\t\t\t\t\t|"<<endl;

    cout<<"Enter the choice :";
    cin>>lchoice;

    Detail d;

    registration r;
    ticket t;

    switch (lchoice) {

        case 1: {
            cout << "____________Customers_____________\n" << endl;
            d.information();
            cout << "press any key to go back to main menu ";
            cin >> back;
            if (back == 1) {
                mainmenu();
            } else
                mainmenu();
            break;
        }

        case 2: {
            cout << "______Book a flight using this system ________\n" << endl;
            r.flight();
            break;
        }
        case 3:
        {
            cout << "______Get YOUR TIKET _____\n" << endl;
            t.Bill();
            cout << "Your tiket  is printed,you can collect it \n" << endl;
            cout << "press 1 to display your ticket ";
            cin >> back;
            if (back == 1) {
                t.display();
                cout << "press any key to go back main menu : ";
                cin >> back;
                if (back == 1) {
                    mainmenu();
                } else {
                    mainmenu();
                }

            } else {
                mainmenu();
            }
            break;
        }
        case 4:
        {
            cout<<"\n\n\t________Thank you__________"<<endl;
            break;

        }
        default:{
            cout<<"invalid input, please try again!\n"<<endl;
            mainmenu();
            break;
        }
    }}
int main() {
    management mobj;



}

