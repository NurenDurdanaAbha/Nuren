#include<iostream>
#include<stdio.h>
#include<string.h>

using namespace std;

class Employee
{
private:
    int employeeID;
    double basicSalary,homeBonus,medical,totalSalary;
    string employeeName,designation;

public:
    ///ID
    void getID(int ID);
    int viewID();

	///NAME
	void getName(string name);
	string viewName();

	///DESIGNATION
	void getDesignation(string D);
	string viewDesignation();

	///BASIC_SALARY
	void getBS(double BS);
    double viewBS();
	double viewHB();
	double viewMEDICAL();
	double viewTOTAL();

};

///ID
inline void Employee::getID(int ID)
    {
		employeeID = ID;
	}
inline int Employee::viewID()
	{
	    return employeeID;
	}

	///NAME
inline void Employee::getName(string name)
	{
		employeeName=name;
	}
inline string Employee::viewName()
	{
	    return employeeName;
	}

	///DESIGNATION
inline void Employee::getDesignation(string D)
	{
		designation=D;
	}
inline string Employee::viewDesignation()
	{
	    return designation;
	}

	///BASIC_SALARY
inline void Employee::getBS(double BS)
	{
		basicSalary=BS;
		homeBonus=BS*(11.5/100.0);
		medical=BS*0.1;
		totalSalary=BS+homeBonus+medical;
	}
inline double Employee::viewBS()
	{
	    return basicSalary;
	}
inline double Employee::viewHB()
	{
	    return homeBonus;
	}
inline double Employee::viewMEDICAL()
	{
	    return medical;
	}
inline double Employee::viewTOTAL()
	{
	    return totalSalary;
	}



int main()
{
    Employee info[1000];
    char a;
    string name,D;
    int num,ID,i=0,j_value;
    double BS;

    while(1)
    {
        meaw:
            me:
    cout<<endl<<"******Choice list*******"<<endl<<endl<<endl;
    cout<<"|a| Add New Employee."<<endl<<"|b| Existing Employee."<<endl;
    cout<<"|c| End programme."<<endl;


    cout<<endl<<"=> Enter your choice......(a, b or c): ";
    cin>>a;
    cout<<"_____________________________________________________"<<endl;

    if(a=='a')
    {
        ghew:
        cout<<endl<<"- - - Storing basic informations - - -"<<endl<<endl;
        cout<<"Employee ID: ";
        cin>>ID;
        if(ID>0)
            info[i].getID(ID);
        else
        {
            cout<<"- - -I N V A L I D- - -\nEmployee ID cannot be a negative number or zero."<<endl;
            goto ghew;
        }

        char n[10];
        gets(n);
        cout<<"Employee's Name: ";
        getline(cin,name);
        info[i].getName(name);

        cout<<"Designation: ";
        getline(cin,D);
        info[i].getDesignation(D);

        ghew2:
        cout<<"Basic Salary: ";
        cin>>BS;
        if(BS<=0)
        {
            cout<<"- - -I N V A L I D- - -\nBasic Salary can not be a negative number or zero."<<endl;
            goto ghew2;
        }
        else
            info[i].getBS(BS);

        i++;

    }
    if(a=='b')
    {
        while(1)
        {
            meaw2:
                me2:
        cout<<endl<<"--------------------------------------------"<<endl<<endl;
        cout<<"\t*****Existing Employee list*****"<<endl;
        cout<<"\t|1| Search an Employee details."<<endl;
        cout<<"\t|2| View & Update Employees' information"<<endl;
        cout<<"\t|3| Back to choice list."<<endl;

        cout<<endl<<"=> Enter your choice......(1, 2 or 3): ";
        cin>> num;
        cout<<endl<<"--------------------------------------------"<<endl<<endl;

        ///search
        if(num==1)
        {
            cout<<endl<<"=> Enter Employee ID that you wanna search: ";


    ///linear search

    int item,flag=0;
    cin>>item;
    for(int j=0; j<i; j++)
    {
        if(info[j].viewID()==item)
        {
         ///view
         cout<<endl<< "Employee ID: "<<info[j].viewID()<<endl;
         cout<<"Employee's Name: "<<info[j].viewName()<<endl;
         cout<<"Designation: "<<info[j].viewDesignation()<<endl;
         cout<<"Basic Salary: "<<info[j].viewBS()<<endl;
         cout<<"Home Bonus: "<<info[j].viewHB()<<endl;
         cout<<"Medical: "<<info[j].viewMEDICAL()<<endl;
         cout<<"Total: "<<info[j].viewTOTAL()<<endl;

         flag=1;
        }
    }
     if(flag!=1)
     {
            cout<<endl<<" - - - NO MATCH FOUND - - - "<<endl;
            goto me2;
     }

        }

            ///update
        if(num==2)
        {
            cout<<endl<<"=> Enter Employee ID that you wanna update: ";
    int item,flag=0;
    cin>>item;
    for(int j=0; j<i; j++)
    {
        if(info[j].viewID()==item)
        {
         ///view
         cout<<endl<< "Employee ID: "<<info[j].viewID()<<endl;
         cout<<"Employee's Name: "<<info[j].viewName()<<endl;
         cout<<"Designation: "<<info[j].viewDesignation()<<endl;
         cout<<"Basic Salary: "<<info[j].viewBS()<<endl;
         cout<<"Home Bonus: "<<info[j].viewHB()<<endl;
         cout<<"Medical: "<<info[j].viewMEDICAL()<<endl;
         cout<<"Total: "<<info[j].viewTOTAL()<<endl;

        j_value=j;
         flag=1;
        }

    }

     if(flag!=1)
     {
            cout<<endl<<" - - - NO MATCH FOUND - - - "<<endl;
            goto me2;
     }

     meaw3:
     cout<<"\t\t*****Update list*****"<<endl;
        cout<<"\t\t|1| Name: "<<endl;
        cout<<"\t\t|2| Designation?"<<endl;
        cout<<"\t\t|3| Basic Salary?"<<endl;
        cout<<"\t\t|4| Go back to existing employee list?"<<endl;
        cout<<"\t\t|5| Go back to Choice list."<<endl;
        cout<<endl<<"=> Choose what you wanna update: ";
        int update;
            cin>>update;

        if(update==1)
        {
         cout<<endl<< "Employee ID: "<<info[j_value].viewID()<<endl;


        char n[10];
        gets(n);
        cout<<"Employee's Name: ";
        getline(cin,name);
        info[j_value].getName(name);

         cout<<"Designation: "<<info[j_value].viewDesignation()<<endl;
         cout<<"Basic Salary: "<<info[j_value].viewBS()<<endl;
         cout<<"Home Bonus: "<<info[j_value].viewHB()<<endl;
         cout<<"Medical: "<<info[j_value].viewMEDICAL()<<endl;
         cout<<"Total: "<<info[j_value].viewTOTAL()<<endl;

         goto meaw3;
        }

        if(update==2)
        {
         cout<<endl<< "Employee ID: "<<info[j_value].viewID()<<endl;
         cout<<"Employee's Name: "<<info[j_value].viewName()<<endl;

        char n[10];
        gets(n);
         cout<<"Designation: ";
         getline(cin,D);
         info[j_value].getDesignation(D);

         cout<<"Basic Salary: "<<info[j_value].viewBS()<<endl;
         cout<<"Home Bonus: "<<info[j_value].viewHB()<<endl;
         cout<<"Medical: "<<info[j_value].viewMEDICAL()<<endl;
         cout<<"Total: "<<info[j_value].viewTOTAL()<<endl;

         goto meaw3;
        }

        if(update==3)
        {
         cout<<endl<< "Employee ID: "<<info[j_value].viewID()<<endl;
         cout<<"Employee's Name: "<<info[j_value].viewName()<<endl;
         cout<<"Designation: "<<info[j_value].viewDesignation()<<endl;

         cout<<"Basic Salary: ";
         cin>>BS;
         info[j_value].getBS(BS);

         cout<<"Home Bonus: "<<info[j_value].viewHB()<<endl;
         cout<<"Medical: "<<info[j_value].viewMEDICAL()<<endl;
         cout<<"Total: "<<info[j_value].viewTOTAL()<<endl;

         goto meaw3;
        }

        if(update==4)
            goto meaw2;

        if(update==5)
            goto me;

            if(update<1 || update>6)
                cout<<endl<<"- - -I N V A L I D- - -"<<endl<<endl;
        }
        if(num==3)
            goto meaw;
        if(num>3 || num<1)
            cout<<endl<<"- - -I N V A L I D- - -"<<endl<<endl;
        }
    }
    if(a=='c')
        break;
    if(a!='a' && a!='b' && a!='c')
        cout<<endl<<"- - -I N V A L I D- - -"<<endl<<endl;
    }

    return 0;
}
