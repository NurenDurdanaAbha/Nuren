#include <iostream>
#include <cstring>
#include <cstdio>

using namespace std;

class employee
{
	int employee_ID;
	char employeeName[100];

public:
	void getEmployee_ID(int ID)

	{

		employee_ID = ID;

	}



	void getEmployeeName(char name[100])

	{

		name=employeeName;

	}



	int showEmployee_ID()

	{

	    return employee_ID;

	}



	char showEmployeeName()

	{

	    return employeeName[100];

	}

};



int main()

{

	employee x[100];

	char nam[100];

	int choice, id;



	for(int i=1;i<=1000;i++)

	{

	    cout << "1. Add New Employee" << endl << "2. Existing Employee" << endl << "3. Exit" << endl << "Enter choice: ";



		scanf("%d", &choice);



		if(choice == 1)

		{

			cout << "Enter the new employee's ID: ";

			cin >> id;

			x[i].getEmployee_ID(id);



			getchar();



			cout << "Enter the new employee's name: ";

			gets(nam);

			x[i].getEmployeeName(nam);

		}



		else if(choice == 2)

        {

        int b=x[i].showEmployee_ID();
            cout << "ID: " << b << endl;

            cout << "Name: " << x[i].showEmployeeName() << endl;

        }



        else if(choice == 3)

            break;



        else

            cout << "Wrong choice." << endl << "Enter the right choice." << endl << endl;

	}



	return 0;

}
