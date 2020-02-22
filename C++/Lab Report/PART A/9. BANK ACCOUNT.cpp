#include<iostream>
using namespace std;

class Bank
{
    string nameOfTheDepositor;
    string accountNumber;
    string typeOfAccount;
    double balance;
public:
    void initial_value()
    {
        cout<<"Enter Name of the Depositor: ";
        getline(cin,nameOfTheDepositor);
        cout<<"Enter Account number: ";
        cin>>accountNumber;
        cout<<"Enter type of account: ";
        getline(cin,typeOfAccount);
        cout<<"Enter Balance: ";
        cin>>balance;
    }
    void depositAnAmount()
    {
        int amount;
        cout<<"Enter deposit amount: ";
        cin>>amount;
        balance = balance + amount;
    }
    void withdrawAnAmount()
    {
        int amount;
        backk:
        cout<<"Enter withdraw amount: ";
        cin>>amount;
        if((balance - amount) <= 0)
        {
            cout<<"Not enought money in your account!!!"<<endl;
            goto backk;
        }
        else
            balance = balance - amount;
    }
    void display()
    {
        cout<<endl<<"Name: "<<nameOfTheDepositor<<endl;
        cout<<"Balance: "<<balance<<endl;
    }
    string returnAccountNo()
    {
        return accountNumber;
    }
};
int main_part()
{
    int n;
    cout<<"What do you want?"<<endl;
    cout<<"1.Create account."<<endl;
    cout<<"2.login in your account."<<endl;
    cout<<"3.Exit."<<endl;
    cout<<"Enter the number(1-3): ";
    cin>>n;
    cin.ignore();
    return n;
}
int second_part()
{
    int n;
    cout<<"What do you want?"<<endl;
    cout<<"1.To deposit an amount."<<endl;
    cout<<"2.To withdraw an amount."<<endl;
    cout<<"3.Show account."<<endl;
    cout<<"4.logout."<<endl;
    cout<<"Enter the number(1-4): ";
    cin>>n;
    cin.ignore();
    return n;
}
int main()
{
    Bank b[11];
    int i = 0,flag;
    while(1)
    {
        switch(main_part())
        {
        case 1:
            i++;
            b[i].initial_value();
            break;
        case 2:
            if(i == 0)
            {
                cout<<"There is no information,please add first"<<endl;
                break;
            }
            for(int j=1;j<=i;j++)
            {
                if(b[i].returnAccountNo() == b[j].returnAccountNo())
                {
                    flag = 1;
                    while(1)
                    {
                        switch(second_part())
                        {
                            case 1:
                                b[j].depositAnAmount();
                                break;
                            case 2:
                                b[j].withdrawAnAmount();
                                break;
                            case 3:
                                b[j].display();
                                break;
                            case 4:
                                goto bac;
                            default:
                                cout<<"Invalid!! please try again."<<endl;
                        }
                    }
                }
            }
            if(flag == 2)
            {
                cout<<"Account Number doesn't match"<<endl;
            }
            bac:
            break;
        case 3:
            goto back;
        default:
            cout<<"Invalid!! please try again."<<endl;
        }
        if(i == 9)
            break;
    }
    back:
    return 0;
}
