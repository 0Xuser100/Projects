#include<iostream>
#include<string>
using namespace std;

enum bloodt{
    a = 1,
    b,
    ab,
    O
};

class bloodbank{
protected:
    string name;
    bloodt bloodtype;
    int age;
    string mo_num;
    static   int A, B, AB, O;
public:
    bloodbank(){
        name = " ";
        age = 1;
        mo_num = " ";
        bloodtype = bloodt(1);
    }

    void set_public_inf(){
        string name;
        int age;
        string mo_num;

        cout << " please enter your name \n";
        cin>>name;
        v7:
        cout << " please enter your age (17-->65)\n";
        cin >> age;
        if(age<17||age>65){
            cout<<"Dont allow,please enter suitable age\n";
            goto v7;
        }
        v1:
        cout << " please enter your mobile number \n";
        cin >> mo_num;
        if(mo_num.size()<11){
            cout<<"invalid,please mobile number should contain 11 character\n ";
            goto v1;
        }
        this->name = name;
        this->age = age;
        this->mo_num = mo_num;
    }
    void getinf(){
        cout <<" name is: " << this->name<<"\n";
        cout<<" age is :  " << this->age<<"\n";
        cout<<" mobile number is : " << this->mo_num << "\n";
    }
};
int bloodbank::A=100;
int bloodbank::B=100;
int bloodbank::AB=100;
int bloodbank::O=100;


class donor :public bloodbank{
public:
    int x;
    void  setblood(){
        v2:
        cout << " enter the number of your blood type  \n A = 1 \n B = 2 \n AB = 3 \n O = 4 \n";
        cin >> x;
        if(x<1||x>4){
            cout<<"invalid,please enter a correct number \n";
            goto v2;
        }
        bloodtype = bloodt(x);
    }
    void operator ++ ()
    {
        if (bloodtype == bloodt(1)){
            A = A + 1;
        }
        else if (bloodtype == bloodt(2)){
            B = B + 1;
        }
        else if (bloodtype == bloodt(3)){
            AB = AB + 1;
        }
        else if(bloodtype == bloodt(4))
        {
            O = O + 1;
        }
    }
    void getall(){
        cout <<" the blood type is "<< bloodt(x) << "\n";
            cout<< " amount of A \t" << A << "\n";
            cout<< " amount of B \t" << B << "\n";
            cout<< " amount of AB\t" << AB << "\n" ;
            cout<< " amount of O \t" << O << "\n";
    }
};
//--------------------------------------
class needer :public bloodbank{
public:

    int x;
    void setblood(){
v3:
        cout << " enter the number of the blood type you need \n A = 1 \n B=2, \n AB=3, \n O=4 \n";
        cin >> x;
        if(x<1||x>4){
            cout<<"invalid,please enter a correct number \n";
            goto v3;
        }

        bloodtype = bloodt(x);


    }
    void operator -- ()
    {
        if (bloodtype == bloodt(1)){
            A = A - 1;
            if (A < 1){
                cout << " sorry we do not have enough blood of this type \n ";
                A = 0;
            }
        }
        else if (bloodtype == bloodt(2)){
            B = B - 1;
            if (B < 1){
                cout << " sorry we do not have enough blood of this type \n ";
                B = 0;
            }
        }
        else if (bloodtype == bloodt(3)){
            AB = AB - 1;
            if (AB < 1){
                cout << " sorry we do not have enough blood of this type \n ";
                AB = 0;
            }
        }
        else if (bloodtype == bloodt(4))
        {
            O = O - 1;
            if (O < 1){
                cout << " sorry we do not have enough blood of this type \n ";
                O = 0;
            }
        }
    }
    void getall(){
        cout << "the blood type is " << bloodt(x) << "\n";
           cout<<" amount of A \t" << A << "\n";
        cout<< " amount of B \t" << B << "\n";
        cout<< " amount of AB\t" << AB << "\n";
        cout<< " amount of O \t" << O << "\n";
    }



};

void interface(){
    cout<<"                                                                             welcome to the Blood Bank        \n";
    cout<<"                                                                             *************************         \n\n\n";
}


int main(){
  //  system("color 4");
  system("color E");

    interface();
    bloodbank cust1;
    donor d1;
    needer n1;
    v5:	cust1.set_public_inf();
    int x;

    cout << " please if you are doner press 1 \n\n";
    cout << " please  if you are needer press 0 \n\n";
    v4:
    cin >> x;
    if (x == true){
        d1.setblood();
        ++d1;
        cust1.getinf();
        d1.getall();
    }
    else if (x==false)
    {	n1.setblood();
        --n1;
        cust1.getinf();
        n1.getall();
    }
    else{
        cout << "ereor,enter right number\n";
        goto v4;
    }
    int  stop;
    v6:
    cout << " please if you want end program press 0\n\n";
     cout<< " if you want to continue press 1   \n";
    cin >> stop;
    if (stop == 1){
        goto v5;
    }
    else if(stop==0){
     cout << "***----------------Congratulation, every thing done well---------------*** \n";
    system("pause");}
    else {
        cout<<"invalid,please enter correct number\n";
        goto v6;
    }
}
/*
 * color of system
 * 0 = Black       8 = Gray
1 = Blue        9 = Light Blue
2 = Green       A = Light Green
3 = Aqua        B = Light Aqua
4 = Red         C = Light Red
5 = Purple      D = Light Purple
6 = Yellow      E = Light Yellow
7 = White       F = Bright White
 */