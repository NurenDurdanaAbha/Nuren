#include<iostream>
using namespace std;

class XYZ;
class PQR;
class ABC
{
    int a;
public:
    void get_data()
    {
        cout<<"Enter first value: ";
        cin>>a;
    }
    friend void greatest(ABC ,XYZ ,PQR );
};

class XYZ
{
    int x;
public:
    void get_info()
    {
        cout<<"Enter second value: ";
        cin>>x;
    }
    friend void greatest(ABC ,XYZ ,PQR );
};
class PQR
{
    int p;
public:
    void set_info()
    {
        cout<<"Enter third value: ";
        cin>>p;
    }
    friend void greatest(ABC ,XYZ ,PQR );
};

void greatest(ABC m,XYZ n,PQR o)
{
    int large;
    if(m.a>n.x && m.a>o.p)
        large = m.a;
    else if(n.x>m.a && n.x>o.p)
        large = n.x;
    else
        large = o.p;
    cout<<endl<<"Greatest value is "<<large<<endl;
}

int main()
{
    ABC x;
    x.get_data();
    XYZ y;
    y.get_info();
    PQR z;
    z.set_info();

    greatest(x,y,z);
    return 0;
}
