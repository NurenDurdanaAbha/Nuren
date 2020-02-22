#include<iostream>

using namespace std;

class first;
class second;
class third;

class first
{
    int a;

public:
    first()
    {

    }
    first(int m)
    {
        a=m;
    }

    friend void max(first, second, third);
};

class second
{
    int b;

public:
    second()
    {

    }
    second(int m)
    {
        b=m;
    }

    friend void max(first, second, third);
};

class third
{
    int c;

public:
    third()
    {

    }
    third(int m)
    {
        c=m;
    }

    friend void max(first, second, third);
};

void max(first x, second y, third z)
{
    if(x.a>y.b && x.a>z.c)
        cout<<"first class has maximum value"<<endl;
    else if(y.b>x.a && y.b>z.c)
        cout<<"second class has maximum value"<<endl;
    else
        cout<<"third class has maximum value"<<endl;
}


int main()
{
    first x(20);
    second y(10);
    third z(30);

    max(x, y, z);

    return 0;
}
