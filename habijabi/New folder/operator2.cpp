#include<iostream>

using namespace std;

class complex
{
    float x;
    int y;

public:
    complex()
    {

    }

    complex (float a, int b)
    {
        x=a;
        y=b;
    }

    complex operator+ (complex c, int b)
    {
        complex t;

        t.x = x + b;
        t.y = y + b;

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

    c3 = c1 + 5;

    c3.display();

    return 0;
}
