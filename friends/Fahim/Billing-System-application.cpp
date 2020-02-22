#include<iostream>
#include<iomanip>
#include<stdlib.h>
#include<conio.h>
using namespace std;

int loopCounter1 = 0;
int LC2;

class Customer
{
    long long AccountNo;
    char CustomerName[40];
    char Address[50];
    long long IdNumber;
    double DueBill;

    public:
        void get_cust_info();
        void put_cust_info();
        long long show_cust_account_no();
        long long show_cust_id_no();
        void update_cust_info(int );
        inline int first_choice_list();
        inline int second_choice_list();
        inline int third_choice_list();
};
Customer cust[1000];

void Customer::get_cust_info()
{
    Repeat1:
    cout<<endl<<"Enter the Customer Account No.: ";
    cin>>AccountNo;
    cin.ignore();

    if(AccountNo <= 0)
    {
        cout<<endl<<"Account No. cannot be a zero or negative number.Please try again."<<endl<<endl;
        goto Repeat1;
    }
    for(int loopCounter3=0;loopCounter3<loopCounter1;loopCounter3++)
    {
        if(cust[loopCounter3].show_cust_account_no()==AccountNo)
        {
            cout<<endl<<"This Account No. has been used.Please try again."<<endl<<endl;
            goto Repeat1;
        }
    }

    cout<<"Enter the Customer Account Name: ";
    cin.getline(CustomerName,40);

    cout<<"Enter the Customer Address: ";
    cin.getline(Address,50);

    Repeat2:
    cout<<"Enter the Customer Id Number: ";
    cin>>IdNumber;

    if(IdNumber <= 0)
    {
        cout<<endl<<"Id Number cannot be a zero or negative number."<<endl<<endl;
        goto Repeat2;
    }
    for(int loopCounter3=0;loopCounter3<loopCounter1;loopCounter3++)
    {
        if(cust[loopCounter3].show_cust_id_no()==IdNumber)
        {
            cout<<endl<<"This Id Number has been used.Please try again."<<endl<<endl;
            goto Repeat2;
        }
    }

    cout<<"Enter the Customer's Due Bill: ";
    cin>>DueBill;

    if(DueBill <= 0)
    {
        DueBill = (-1)*DueBill;
    }
    cout<<endl;
}

void Customer::put_cust_info()
{
    cout<<endl<<endl;
    cout<<"\t\tAccount No.: "<<AccountNo<<endl;
    cout<<"\t\tAccount Name: "<<CustomerName<<endl;
    cout<<"\t\tAddress: "<<Address<<endl;
    cout<<"\t\tId Number: "<<IdNumber<<endl;
    cout<<"\t\tDue Bill: - "<<DueBill<<endl<<endl;
}

long long Customer::show_cust_account_no()
{
    return AccountNo;
}

long long Customer::show_cust_id_no()
{
    return IdNumber;
}

void Customer::update_cust_info(int LC2)
{
    while(1)
    {
        switch(cust[LC2].third_choice_list())
        {
        /// update Customer Name
        case 1:
            cout<<cust[LC2].show_cust_account_no()<<endl;

            Repeat3:
            cout<<endl<<"Enter new account no.: ";
            cin>>AccountNo;

            cout<<cust[LC2].show_cust_account_no()<<" "<<AccountNo<<endl;

            if(AccountNo <= 0)
            {
                cout<<endl<<"Account no. cannot be a zero or negative number."<<endl<<endl;
                goto Repeat3;
            }

            for(int loopCounter3=0;loopCounter3<=loopCounter1;loopCounter3++)
            {
                cout<<"lc3: "<<loopCounter3<<" lc2: "<<LC2<<" lc1: "<<loopCounter1<<endl;
                cout<<cust[LC2].show_cust_account_no()<<" "<<cust[loopCounter3].show_cust_account_no()<<" "<<AccountNo<<endl;

                if(cust[loopCounter3].show_cust_account_no() == AccountNo)
                {
                    cout<<endl<<"This account no has been used.Please try again."<<endl<<endl;
                    goto Repeat3;
                }
            }
            break;
        case 2:
            cout<<endl<<"Enter New Customer Name: ";
            cin.getline(CustomerName,40);
            break;
        case 3:
            cout<<endl<<"Enter new Customer Address: ";
            cin.getline(Address,50);
            break;
        case 4:
            cout<<endl<<"Enter new Customer Due Bill: ";
            cin>>DueBill;

            if(DueBill <= 0)
            {
                DueBill = (-1)*DueBill;
            }
            break;
        case 5:
            goto Back3;

        default:
            cout<<endl<<"Wrong! please try again."<<endl<<endl;
            continue;
        }
    }
    Back3:
    cout<<endl;
}

inline int Customer::third_choice_list()
{
    cout<<endl<<"======================================================="<<endl;
    cout<<endl<<"What do you want?\n"<<endl;
    cout<<"1. Account No."<<endl;
    cout<<"2. Customer Name."<<endl;
    cout<<"3. Customer Address."<<endl;
    cout<<"4. Customer Due Bill."<<endl;
    cout<<"5. Back."<<endl;
    cout<<"Enter the Number(1-5): ";
    int choiceList3;
    cin>>choiceList3;
    cin.ignore();
    return choiceList3;
}

inline int Customer::second_choice_list()
{
    cout<<endl<<"======================================================="<<endl;
    cout<<endl<<"What do you want?\n"<<endl;
    cout<<"1. View Details."<<endl;
    cout<<"2. Update Information."<<endl;
    cout<<"3. Back."<<endl;
    cout<<"Enter the Number(1-3): ";
    int choiceList2;
    cin>>choiceList2;
    return choiceList2;
}

inline int Customer::first_choice_list()
{
    cout<<"\n\t\t\t\t\tBilling System application\n\n\n";
    cout<<"What do you want?\n"<<endl;
    cout<<"1. To add account"<<endl;
    cout<<"2. To search account"<<endl;
    cout<<"3. To exit"<<endl;
    cout<<"Enter the Number(1-3): ";
    int choiceList1;
    cin>>choiceList1;
    return choiceList1;
}

int main()
{
    int Id_Number, NoMatch, unsuccessfulCounter;
    char AccountName[40];
    while(1)
    {
        unsuccessfulCounter = 0;
        switch(cust[loopCounter1].first_choice_list())
        {
            ///To add account
        case 1:
            cust[loopCounter1].get_cust_info();
            loopCounter1++;
            break;
            ///To search account
        case 2:
            if(loopCounter1 == 0)
            {
                cout<<endl<<"No Account in here. please add first."<<endl<<endl;
                cout<<"Press any key to back main menu."<<endl;
                getch();
                goto Repeat4;
            }

            while(1)
            {
                NoMatch = 1;
                cout<<endl<<"Enter the search Id Number: ";
                cin>>Id_Number;

                for(int loopCounter2=0;loopCounter2<loopCounter1;loopCounter2++)
                {
                    if(cust[loopCounter2].show_cust_id_no() == Id_Number)
                    {
                        NoMatch = 2;
                        while(1)
                        {
                            switch(cust[loopCounter2].second_choice_list())
                            {
                            ///View Details
                            case 1:
                                cust[loopCounter2].put_cust_info();
                                break;
                            ///Update Information.
                            case 2:
                                LC2=loopCounter2;
                                cust[LC2].update_cust_info(LC2);
                                cout<<"Now,changing details are: "<<endl;
                                cust[LC2].put_cust_info();
                                break;
                            case 3:
                                goto Back1;

                            default:
                                cout<<endl<<"Wrong! please try again."<<endl<<endl;
                                continue;
                            }
                        }
                    }
                }
                if(NoMatch == 1)
                {
                    unsuccessfulCounter++;
                    if(unsuccessfulCounter == 3)
                    {
                        cout<<endl<<"Maybe you have no account in this application. please create new account."<<endl<<endl;
                        cout<<"Press any key to back add new user."<<endl;
                        getch();
                        goto Repeat4;
                    }
                    cout<<endl<<"This account doesn't match.please try again."<<endl<<endl;
                    continue;
                }
            }
            break;
        case 3:
            cout<<"\n\n\n\t\t\t\tThank you for visiting this application.\n\n"<<endl;
            exit(0);
        default:
            cout<<endl<<"Wrong! please try again."<<endl<<endl;
            cout<<"Press any key to back main menu."<<endl;
            getch();
            goto Repeat4;
        }
        Back1:
        Repeat4:
        cout<<endl;
        system("cls");
    }

    return 0;
}
