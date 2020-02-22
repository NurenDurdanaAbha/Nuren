#include<iostream>
#include<string.h>

using namespace std;

class employee
{
    char name[80];
    double wage;

public:
    void putname(char *n)
    {
        strcpy(name,n);
    }

    void getname(char *n)
    {
        strcpy(n,name);
    }


    void putwage(double w)
    {
        wage=w;
    }

    double getwage()
    {
        return wage;
    }
};


int main()
{
    employee a;
    char name[80];

    a.putname("Nuren");
    a.putwage(120000);

    a.getname(name);
    cout << name << " makes $" << endl;
    cout << a.getwage() << " per year" << endl;

    return 0;
}
