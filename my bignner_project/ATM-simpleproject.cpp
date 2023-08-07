#include<bits/stdc++.h>
using namespace std;
void showmenu(){
    cout<<"**********Menu**********\n";
    cout<<"1.check balance\n";
    cout<<"2.Deposite\n";
    cout<<"3.withdraw\n";
    cout<<"4.EXIT\n";

    cout<<"********** SIB Bank **********\n";

}
int main() {
    system("color E");
    int options;
    double balance=4000;
   A:
        showmenu();
        cout<<"options :";
        cin>>options;
        switch (options) {
            case 1:
                cout<<"Balance is : "<<balance<<" $\n";
                break;

            case 2: {
                cout << "Deposite amount is \n";
                double deposite;
                cin >> deposite;
                balance += deposite;
                cout<<"balance updated successfully\n";
                cout<<"balance now  is = "<<balance<<"\n";
                break;
            }
            case 3: {
                cout << "withdraw amount \n";
                double withdraw;
                cin >> withdraw;
                if (withdraw <= balance) {
                    balance -= withdraw;
                    cout<<"balance updated successfully\n";
                    cout<<"balance now  is = "<<balance<<"\n";
                }

                else
                    cout << "there is no enough money \n";
                break;
            }
            case 4:
                cout<<"********* see you later **********";
                exit(0);
            default:{
                cout<<"you input invalid number ,please try again\n";
            }

        }
    goto A;

}
