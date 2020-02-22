#include<iostream>

using namespace std;

double area(double length, double width)
{
    return length*width;
}

double area(double length)
{
    return length*length;
}

int main()
{
    cout<<"Area: "<<area(10.3,5.8)<<endl;
    cout<<"Area: "<<area(10.4)<<endl;

    return 0;
}
