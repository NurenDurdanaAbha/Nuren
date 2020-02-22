#include<iostream>

using namespace std;

class complex
{
    float x,y;

public:
    complex(){}

    complex (float a, float b)
    {
        x=a;
        y=b;
    }

    complex operator+ (complex c)
    {
        complex t;

        t.x = x + c.x;
        t.y = y + c.y;

        return t;
    }

    void display()
    {
        cout<<x<<" "<<y<<endl;
    }
};


int main()
{
    complex c1(10.7,1);
    complex c2(20.8,3);
    complex c3;

    c3 = c1 + c2;
    c3 = c1 + s1;
    c3 = c1 + 5;
    c3 = 6 + c1;

    c3.display();

    return 0;
}
