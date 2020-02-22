#include<iostream>

using namespace std;

class person
{
public:
    string name;

    class address
    {
        public:
        string country;
        int hno;
    };

    address a;

    void getnam(string n)
    {
        name = n;
    }
    string viewnam()
    {
        return name;
    }

    void getcountry(string c)
    {
        a.country=c;
    }
    string viewcountry()
    {
        return a.country;
    }

    void gethno(int h)
    {
        a.hno=h;
    }
    int viewhno()
    {
        return a.hno;
    }

};

int main()
{
    string n,c;
    int h;
    person nuren;

    cout<<"Input"<<endl;
    getline(cin,n);
    nuren.getnam(n);

    getline(cin,c);
    nuren.getcountry(c);

    cin>>h;
    nuren.gethno(h);

    cout<<"Output"<<endl;
    nuren.viewnam();
    nuren.viewcountry();
    nuren.viewhno();


    return 0;
}
