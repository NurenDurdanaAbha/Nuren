#include<iostream>
#include<stdio.h>

using namespace std;

class Customer
{
private:
    double accountNo;
    string customerName;
    string address;
    double ID_number;
    double dueBill;

public:
    ///accountNo
    void get_accountNo(double Acc_No);
    double view_accountNo();

    ///customerName
    void get_customerName(string name);
    string view_customerName();

    ///address
    void get_address(string add);
    string view_address();

    ///ID_number
    void get_ID_number(double ID);
    double view_ID_number();

    ///dueBill
    void get_dueBill(double DB);
    double view_dueBill();

};
///accountNo
inline void Customer::get_accountNo(double Acc_no)
    {
		accountNo = Acc_no;
	}
inline double Customer::view_accountNo()
	{
	    return accountNo;
	}

	///customerName
inline void Customer::get_customerName(string name)
	{
		customerName = name;
	}
inline string Customer::view_customerName()
	{
	    return customerName;
	}

	///address
inline void Customer::get_address(string add)
	{
		address = add;
	}
inline string Customer::view_address()
	{
	    return address;
	}

///ID_number
inline void Customer::get_ID_number(double ID)
    {
		ID_number = ID;
	}
inline double Customer::view_ID_number()
	{
	    return ID_number;
	}

	///dueBill
inline void Customer::get_dueBill(double DB)
    {
		dueBill = DB;
	}
inline double Customer::view_dueBill()
	{
	    return dueBill;
	}


int main()
{
    Customer info[10000];
    double Acc_no,ID,DB;
    string name,add;

    char firstChoiceInput[2];
    int i=0,jj_value,j_value,k;

    cout<<"\t\t\t\t***BILLING SYSTEM APPLICATION***"<<endl;
    while(1)
    {
    mainMenu:
    cout<<endl<<"___________________________________________________"<<endl<<endl;
    cout<<"\t******Main Menu*******"<<endl<<endl;
    cout<<"Press 1,2 or 3: "<<endl;
    cout<<" |1| To add account information."<<endl;
    cout<<" |2| To search & update account information."<<endl;
    cout<<" |3| To exit."<<endl;
    cout<<endl<<"___________________________________________________"<<endl<<endl;

    cout<<endl<<"What do you want to do?  => ";
    cin>>firstChoiceInput;

    if(firstChoiceInput[0]=='1' && firstChoiceInput[1]=='\0')
    {
        cout<<endl<<"- - - Enter customer's informations - - -"<<endl<<endl;

        correction1:
        cout<<"Account no.: ";
        cin>>Acc_no;

         for(k=0; k<=i; k++)
        {
            if(info[k].view_accountNo()==Acc_no && Acc_no!=0)
            {
                cout<<endl<<"This account no. is already used."<<endl<<endl;
                goto correction1;
                break;
            }
        }

        if(Acc_no>0)
            info[i].get_accountNo(Acc_no);
        else
        {
            cout<<"- - -I N V A L I D- - -\nAccount no. cannot be a negative number or zero."<<endl;
            goto correction1;
        }


        getchar();
        cout<<"Customer name: ";
        getline(cin,name);
        info[i].get_customerName(name);

        cout<<"Address: ";
        getline(cin,add);
        info[i].get_address(add);

        correction2:
        cout<<"ID number: ";
        cin>>ID;

        for(k=0; k<=i; k++)
        {
            if(info[k].view_ID_number()==ID && ID!=0)
            {
                cout<<endl<<"This ID number is already used."<<endl<<endl;
                goto correction2;
                break;
            }
        }

        if(ID>0)
            info[i].get_ID_number(ID);
        else
        {
            cout<<"- - -I N V A L I D- - -\nID number cannot be a negative number or zero."<<endl;
            goto correction2;
        }

        correction3:
        cout<<"Due bill: ";
        cin>>DB;
        if(DB>=0)
            info[i].get_dueBill(DB);
        else
        {
            cout<<"- - -I N V A L I D- - -\nDue bill cannot be a negative number."<<endl;
            goto correction3;
        }

        i++;
    }

    else if(firstChoiceInput[0]=='2' && firstChoiceInput[1]=='\0')
    {
        while(1)
        {
            if(i==0)
            {
                cout<<endl<<"There is no account to search....Add an account first....You are directly taken to the main menu."<<endl;
                goto mainMenu;
            }

        ///search
            logIn:
            cout<<endl<<"___________________________________________________"<<endl<<endl;
            cout<<"\t\t\t*****Log in menu*****"<<endl<<endl;
            cout<<"\tWhat do you want to log in to search with?"<<endl;
            cout<<"\t |1| ID number."<<endl;
            cout<<"\t |2| Customer Name."<<endl;
            cout<<"\t |3| Go back to main menu"<<endl;
            cout<<endl<<"___________________________________________________"<<endl<<endl;
            cout<<"\t=> Enter your choice......(1, 2 or 3): ";

            char secondChoiceInput[2];
        cin>> secondChoiceInput;


        ///linear search with account number
        if(secondChoiceInput[0]=='1' && secondChoiceInput[1]=='\0')
        {
            int flag=0;
            double searchingID_no;
            cout<<endl<<"=> Enter the ID number you want to search: ";

            cin>>searchingID_no;
            for(int j=0; j<i; j++)
            {
                if(info[j].view_ID_number()==searchingID_no)
                {
                ///view
                printf("\nAccount no.: %.0lf\n",info[j].view_accountNo());
                cout<<"Customer name: "<<info[j].view_customerName()<<endl;
                cout<<"Address: "<<info[j].view_address()<<endl;
                printf("Id number: %.0lf\n",info[j].view_ID_number());
                cout<<"Due bill: -"<<info[j].view_dueBill()<<endl;

                j_value=j;
                flag=1;
                }
            }
                if(flag!=1)
                {
                    cout<<endl<<" - - - NO MATCH FOUND - - - "<<endl;
                    goto logIn;
                }
                else
                {
                    cout<<endl<<"___________________________________________________"<<endl<<endl;
                    cout<<endl<<"\tDo you want to update any information?"<<endl;
                    cout<<"\t |1| Yes."<<endl<<"\t |2| No."<<endl;
                    cout<<endl<<"___________________________________________________"<<endl<<endl;
                    cout<<"\t=> Enter your choice......(1 or 2): ";

                    char yesNo1[2];
                    cin>>yesNo1;

                    if(yesNo1[0]=='1' && yesNo1[1]=='\0')
                    {
                        updateList:
        cout<<endl<<"___________________________________________________"<<endl<<endl;
        cout<<"\t\t\t*****Update list*****"<<endl<<endl;
        cout<<"\t\t|1| Account No? "<<endl;
        cout<<"\t\t|2| Customer Name?"<<endl;
        cout<<"\t\t|3| Address?"<<endl;
        cout<<"\t\t|4| Due bill?"<<endl;
        cout<<"\t\t|5| Go back to log in menu"<<endl;
        cout<<"\t\t|6| Go back to main menu"<<endl;
        cout<<endl<<"___________________________________________________"<<endl<<endl;
        cout<<"\t=> Choose what do you want to update: ";

        char update[2];
            cin>>update;

            if(update[0]=='1' && update[1]=='\0')
            {

                correction5:
        cout<<"Account no.: ";
        cin>>Acc_no;

        for(k=0; k<=i; k++)
        {
            if(info[k].view_accountNo()==Acc_no && Acc_no!=0)
            {
                cout<<endl<<"This account no. is already used."<<endl<<endl;
                goto correction5;
                break;
            }
        }

        if(Acc_no>0)
            info[j_value].get_accountNo(Acc_no);
        else
        {
            cout<<"- - -I N V A L I D- - -\nAccount no. cannot be a negative number or zero."<<endl;
            goto correction5;
        }

                cout<<"Customer name: "<<info[j_value].view_customerName()<<endl;
                cout<<"Address: "<<info[j_value].view_address()<<endl;
                printf("Id number: %.0lf\n",info[j_value].view_ID_number());
                cout<<"Due bill: -"<<info[j_value].view_dueBill()<<endl;

                goto updateList;

            }

            else if(update[0]=='2' && update[1]=='\0')
            {
                printf("\nAccount no.: %.0lf\n",info[j_value].view_accountNo());

                getchar();
        cout<<"Customer name: ";
        getline(cin,name);
        info[j_value].get_customerName(name);

                cout<<"Address: "<<info[j_value].view_address()<<endl;
                printf("Id number: %.0lf\n",info[j_value].view_ID_number());
                cout<<"Due bill: -"<<info[j_value].view_dueBill()<<endl;

                goto updateList;

            }

            else if(update[0]=='3' && update[1]=='\0')
            {
                printf("\nAccount no.: %.0lf\n",info[j_value].view_accountNo());
                cout<<"Customer name: "<<info[j_value].view_customerName()<<endl;

                getchar();
                cout<<"Address: ";
        getline(cin,add);
        info[j_value].get_address(add);

                printf("Id number: %.0lf\n",info[j_value].view_ID_number());
                cout<<"Due bill: -"<<info[j_value].view_dueBill()<<endl;

                goto updateList;
            }

            else if(update[0]=='4' && update[1]=='\0')
            {
                printf("\nAccount no.: %.0lf\n",info[j_value].view_accountNo());
                cout<<"Customer name: "<<info[j_value].view_customerName()<<endl;
                cout<<"Address: "<<info[j_value].view_address()<<endl;
                printf("Id number: %.0lf\n",info[j_value].view_ID_number());

                correction6:
        cout<<"Due bill: ";
        cin>>DB;
        if(DB>=0)
            info[j_value].get_dueBill(DB);
        else
        {
            cout<<"- - -I N V A L I D- - -\nDue bill cannot be a negative number."<<endl;
            goto correction6;
        }

        goto updateList;
            }

            else if(update[0]=='5' && update[1]=='\0')
            {
                goto logIn;
            }

            else if(update[0]=='6' && update[1]=='\0')
            {
                goto mainMenu;
            }
            else
            {
                cout<<endl<<"- - -I N V A L I D- - -"<<endl<<endl;
            }


                    }
                    else if(yesNo1[0]=='2' && yesNo1[1]=='\0')
                    {
                        goto mainMenu;
                    }
                    else
                    {
                        cout<<endl<<"- - -I N V A L I D- - -"<<endl<<endl;
                    }
                }
        }

        ///linear search with name
        else if(secondChoiceInput[0]=='2' && secondChoiceInput[1]=='\0')
        {
            int flag=0;
            string searchingName;
            getchar();
            cout<<endl<<"Enter the customer's full name (that you provided while opening the account or after update): ";
            getline(cin,searchingName);

            for(k=0; k<i-1; k++)
        {
            if(info[k].view_customerName()==searchingName)
            {
                cout<<endl<<"You have matching name with another customer.\n\nPLEASE enter your ID number: ";

                double searchingID_no;
                cin>>searchingID_no;
            for(int j=0; j<i; j++)
            {
                if(info[j].view_ID_number()==searchingID_no)
                {
                ///view
                printf("\nAccount no.: %.0lf\n",info[j].view_accountNo());
                cout<<"Customer name: "<<info[j].view_customerName()<<endl;
                cout<<"Address: "<<info[j].view_address()<<endl;
                printf("Id number: %.0lf\n",info[j].view_ID_number());
                cout<<"Due bill: -"<<info[j].view_dueBill()<<endl;

                jj_value=j;
                flag=1;
                }
            }
                goto checkID;
            }
        }

            for(int j=0; j<i; j++)
            {
                if(info[j].view_customerName()==searchingName)
                {
                ///view
                printf("\nAccount no.: %.0lf\n",info[j].view_accountNo());
                cout<<"Customer name: "<<info[j].view_customerName()<<endl;
                cout<<"Address: "<<info[j].view_address()<<endl;
                printf("Id number: %.0lf\n",info[j].view_ID_number());
                cout<<"Due bill: -"<<info[j].view_dueBill()<<endl;

                jj_value=j;
                flag=1;
                }
            }
            checkID:
                if(flag!=1)
                {
                    cout<<endl<<" - - - NO MATCH FOUND - - - "<<endl;
                    goto logIn;
                }
                else
                {
                    cout<<endl<<"___________________________________________________"<<endl<<endl;
                    cout<<endl<<"\tDo you want to update any information?"<<endl;
                    cout<<"\t |1| Yes."<<endl<<"\t |2| No."<<endl;
                    cout<<endl<<"___________________________________________________"<<endl<<endl;
                    cout<<"\t=> Enter your choice......(1 or 2): ";

                    char yesNo2[2];
                    cin>>yesNo2;

                    if(yesNo2[0]=='1' && yesNo2[1]=='\0')
                    {
                        updateList1:
        cout<<endl<<"___________________________________________________"<<endl<<endl;
        cout<<"\t\t\t*****Update list*****"<<endl<<endl;
        cout<<"\t\t|1| Update Account No? "<<endl;
        cout<<"\t\t|2| Update Customer Name?"<<endl;
        cout<<"\t\t|3| Update Address?"<<endl;
        cout<<"\t\t|4| Update Due bill?"<<endl;
        cout<<"\t\t|5| Go back to log in menu"<<endl;
        cout<<"\t\t|6| Go back to main menu"<<endl;
        cout<<endl<<"___________________________________________________"<<endl<<endl;
        cout<<"\t=> Choose what do you want to do? ";

        char update[2];
            cin>>update;

            if(update[0]=='1' && update[1]=='\0')
            {

                correction7:
        cout<<"Account no.: ";
        cin>>Acc_no;

        for(k=0; k<=i; k++)
        {
            printf("%.0lf %.0lf\n",info[k].view_accountNo(),Acc_no);
            if(info[k].view_accountNo()==Acc_no && Acc_no!=0)
            {
                cout<<endl<<"This account no. is already used."<<endl<<endl;
                goto correction7;
                break;
            }
        }

        if(Acc_no>0)
            info[jj_value].get_accountNo(Acc_no);
        else
        {
            cout<<"- - -I N V A L I D- - -\nAccount no. cannot be a negative number or zero."<<endl;
            goto correction7;
        }

                cout<<"Customer name: "<<info[jj_value].view_customerName()<<endl;
                cout<<"Address: "<<info[jj_value].view_address()<<endl;
                printf("Id number: %.0lf\n",info[jj_value].view_ID_number());
                cout<<"Due bill: -"<<info[jj_value].view_dueBill()<<endl;

                goto updateList1;

            }

            else if(update[0]=='2' && update[1]=='\0')
            {
                printf("\nAccount no.: %.0lf\n",info[jj_value].view_accountNo());

                getchar();
        cout<<"Customer name: ";
        getline(cin,name);
        info[jj_value].get_customerName(name);

                cout<<"Address: "<<info[jj_value].view_address()<<endl;
                printf("Id number: %.0lf\n",info[jj_value].view_ID_number());
                cout<<"Due bill: -"<<info[jj_value].view_dueBill()<<endl;

                goto updateList1;

            }

            else if(update[0]=='3' && update[1]=='\0')
            {
                printf("\nAccount no.: %.0lf\n",info[jj_value].view_accountNo());
                cout<<"Customer name: "<<info[jj_value].view_customerName()<<endl;

                getchar();
                cout<<"Address: ";
        getline(cin,add);
        info[jj_value].get_address(add);

                printf("Id number: %.0lf\n",info[jj_value].view_ID_number());
                cout<<"Due bill: -"<<info[jj_value].view_dueBill()<<endl;

                goto updateList1;
            }

            else if(update[0]=='4' && update[1]=='\0')
            {
                printf("\nAccount no.: %.0lf\n",info[jj_value].view_accountNo());
                cout<<"Customer name: "<<info[jj_value].view_customerName()<<endl;
                cout<<"Address: "<<info[jj_value].view_address()<<endl;
                printf("Id number: %.0lf\n",info[jj_value].view_ID_number());

                correction8:
        cout<<"Due bill: ";
        cin>>DB;
        if(DB>=0)
            info[jj_value].get_dueBill(DB);
        else
        {
            cout<<"- - -I N V A L I D- - -\nDue bill cannot be a negative number."<<endl;
            goto correction8;
        }

        goto updateList1;
            }

            else if(update[0]=='5' && update[1]=='\0')
            {
                goto logIn;
            }

            else if(update[0]=='6' && update[1]=='\0')
            {
                goto mainMenu;
            }
            else
            {
                cout<<endl<<"- - -I N V A L I D- - -"<<endl<<endl;
            }
                }

                else if(yesNo2[0]=='2' && yesNo2[1]=='\0')
                    {
                        goto mainMenu;
                    }
                else
                    {
                        cout<<endl<<"- - -I N V A L I D- - -"<<endl<<endl;
                    }
        }
        }

        else if(secondChoiceInput[0]=='3' && secondChoiceInput[1]=='\0')
        {
            goto mainMenu;
        }
        else
        {
            cout<<endl<<"- - -I N V A L I D- - -"<<endl<<endl;
        }
    }
    }

    ///exit
    else if(firstChoiceInput[0]=='3' && firstChoiceInput[1]=='\0')
    {
       break;
    }

    else
    {
        cout<<endl<<"- - -I N V A L I D- - -"<<endl<<endl;
    }

    }
    return 0;
}
