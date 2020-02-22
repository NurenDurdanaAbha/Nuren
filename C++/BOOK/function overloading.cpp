#include<iostream>

using namespace std;

int volume(int);
double volume(double,int);
long volume(long, int, int);

int volume(int s)
{
    return s*s*s;
}

double volume(double r, int h, int g)
{
    return 3.1416*r*r*h;
}

long volume(long l, int b, int h)
{
    return l*b*h;
}

int main()
{
    cout<<volume(10)<<endl;
    cout<<volume(2.7,5)<<endl;
    cout<<volume(2,5,8)<<endl;
    cout<<volume(101,75,15)<<endl;

    return 0;
}
