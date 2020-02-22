#include<iostream>
#include<stdio.h>
#include<cstring>

using namespace std;

class bank
{
private:
    string accountHolderName;
    double accountNumber;
    char password[50];

    double balance;

public:
    ///accountHolderName
    void get_accountHolderName(string name);
    string view_accountHolderName();

    ///accountNumber
    void get_accountNumber(double accNumber);
    double view_accountNumber();

    ///password
    void get_password(char* pass);
    char* view_password();

    ///deposit
    void input_deposit(double deposit);

    ///withdraw
    void input_withdraw(double withdraw);

    ///checkBalance
    double checkBalance();

};

///accountHolderName
inline void bank::get_accountHolderName(string name)
{
   accountHolderName=name;
}
inline string bank::view_accountHolderName()
{
    return accountHolderName;
}

///accountNumber
inline void bank::get_accountNumber(double accNumber)
{
    accountNumber=accNumber;
}
inline double bank::view_accountNumber()
{
    return accountNumber;
}

///password
inline void bank::get_password(char* pass)
{
    strcpy(password,pass);
}
inline char* bank::view_password()
{
    return password;
}

///deposit
inline void bank::input_deposit(double deposit)
{
    balance = balance + deposit;
}

 ///withdraw
inline void bank::input_withdraw(double withdraw)
{
    balance = balance - withdraw;
}

///checkBalance
inline double bank::checkBalance()
{
    return balance;
}

int main()
{
    bank info[10000];

    int i=0,k,j_value,j;
    string name;
    char firstChoiseInput[2],secondChoiseList[2],pass[50];
    double accNumber,deposit,withdraw,balance=0;



    while(1)
    {
        mainMenu:
        cout<<endl<<"___________________________________________________"<<endl<<endl;
        cout<<"\t******Main Menu*******"<<endl<<endl;
        cout<<"Press 1, 2 or 3: "<<endl;
        cout<<" |1| Add new user."<<endl;
        cout<<" |2| Log in."<<endl;
        cout<<" |3| Exit."<<endl;
        cout<<endl<<"___________________________________________________"<<endl<<endl;

        cout<<"What do you want to do?  => ";

        cin>>firstChoiseInput;

        if(firstChoiseInput[0]=='1' && firstChoiseInput[1]=='\0')
        {
            cout<<endl<<"- - - Enter customer's informations - - -"<<endl<<endl;

            getchar();
            cout<<"Account Holder Name: ";
            getline(cin,name);
            info[i].get_accountHolderName(name);

            correction1:
            cout<<"Account Number: ";
            cin>>accNumber;

            for(k=0; k<=i; k++)
        {
            if(info[k].view_accountNumber()==accNumber && accNumber!=0)
            {
                cout<<endl<<"This Account number is already used."<<endl<<endl;
                goto correction1;
                break;
            }
        }

        if(accNumber>0)
            info[i].get_accountNumber(accNumber);
        else
        {
            cout<<"- - -I N V A L I D- - -\nAccount number cannot be a negative number or zero."<<endl<<endl;
            goto correction1;
        }

            getchar();
            correction2:
            cout<<"Password: ";
            gets(pass);

            if(strlen(pass)>=6)
                info[i].get_password(pass);
            else
            {
              cout<<endl<<"\t\tPassword should have at least 6 characters...!"<<endl<<endl;
              goto correction2;
            }


            i++;

        }

        else if(firstChoiseInput[0]=='2' && firstChoiseInput[1]=='\0')
        {
            if(i==0)
            {
                cout<<endl<<"There is no account to log in....Add an account first....You are directly taken to the main menu."<<endl<<endl;
                goto mainMenu;
            }


            ///log in
            int flag=0;
            char searchingPass[50];
            double searchingNumber;

            k=3;
            correction3:
            cout<<"\n\tEnter account Number: ";
            cin>>searchingNumber;

            for(j=0; j<i; j++)
            {
                if(info[j].view_accountNumber()==searchingNumber)
                {
                    j_value=j;
                    flag=1;
                }
            }

            if(flag!=1)
            {
                while(k>=1)
                {
                 cout<<"\t\t\t**Invalid Account Number**"<<endl<<endl;
                 cout<<"\t\tYou can try for next "<<k--<<" times"<<endl<<endl;
                 goto correction3;
                }

                if(k==0)
                {
                    cout<<"\t\t\t**Invalid Account Number**"<<endl<<endl;
                    cout<<"\t\tYou can not sign in now...Come back later...!"<<endl<<endl;
                    goto exit;
                }
            }

            else
            {

                getchar();
                correction4:
                cout<<"\tEnter Password: ";
                gets(searchingPass);

                if(strcmp(info[j_value].view_password(),searchingPass)!=0)
                {
                    cout<<"\t\t\t**Invalid Password**\n\n\t\tTry again!"<<endl<<endl;
                    goto correction4;
                }
                else
                {
                    cout<<endl<<endl<<"\t****Login successful****"<<endl;
                    correction5:
                    cout<<endl<<"___________________________________________________"<<endl<<endl;
                    cout<<"\t\t- - -Choice List- - -"<<endl;
                    cout<<" |1| Deposit"<<endl;
                    cout<<" |2| Withdraw"<<endl;
                    cout<<" |3| Check balance"<<endl;
                    cout<<" |4| Go to main menu"<<endl;
                    cout<<endl<<"___________________________________________________"<<endl<<endl;

                    cout<<"What do you want to do?...(press 1, 2, 3 or 4) => ";

                    cin>>secondChoiseList;

                    ///Deposit
                    if(secondChoiseList[0]=='1' && secondChoiseList[1]=='\0')
                    {
                        cout<<endl<<"Enter the amount to Deposit: ";
                        cin>>deposit;

                        if(deposit>=0)
                        {
                           info[j_value].input_deposit(deposit);
                           goto correction5;
                        }
                        else
                        {
                          cout<<endl<<"\tAmount cannot be a negative number."<<endl;
                          goto correction5;
                        }

                    }

                    ///Withdraw
                    else if(secondChoiseList[0]=='2' && secondChoiseList[1]=='\0')
                    {
                        cout<<endl<<"Enter the amount to Withdraw: ";
                        cin>>withdraw;

                        if(info[j_value].checkBalance()>=withdraw)
                        {
                          info[j_value].input_withdraw(withdraw);
                          goto correction5;
                        }

                        else
                        {
                          cout<<endl<<"\t => SORRY....You do not have enough money in your account to withdraw....!"<<endl;
                          goto correction5;
                        }

                    }

                    ///Check balance
                    else if(secondChoiseList[0]=='3' && secondChoiseList[1]=='\0')
                    {
                        printf("\n\t => You have BDT %.2lf taka in your account....!",info[j_value].checkBalance());
                        goto correction5;
                    }

                    ///go to main menu
                   else if(secondChoiseList[0]=='4' && secondChoiseList[1]=='\0')
                    {
                        goto mainMenu;
                    }

                    else
                    {
                        cout<<endl<<"- - -I N V A L I D- - -"<<endl<<endl;
                        goto correction5;
                    }
                }
            }
        }

        ///exit
        else if(firstChoiseInput[0]=='3' && firstChoiseInput[1]=='\0')
        {
            exit:
                break;
        }

        else
        {
            cout<<endl<<"- - -I N V A L I D- - -"<<endl<<endl;
        }
    }

    return 0;
}
