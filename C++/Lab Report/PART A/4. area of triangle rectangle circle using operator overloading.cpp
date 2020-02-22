#include<iostream>
using namespace std;

double Area(float a,int b,int h)
{
    return a*b*h;
}

double Area(int r)
{
    return (3.1416*r*r);
}

int Area(int l,int w)
{
    return l*w;
}

int main()
{
    int l,r,h,b,w;
    cout<<"Enter the Height, Base: ";
    cin>>b>>h;
    cout<<"=>Area of Triangle: "<<Area(.5,b,h)<<endl<<endl;

    cout<<"Enter the Radius: ";
    cin>>r;
    cout<<"=>Area of Circle: "<<Area(r)<<endl<<endl;

    cout<<"Enter the Length, Width: ";
    cin>>l>>w;
    cout<<"=>Area of Rectangle: "<<Area(l,w)<<endl<<endl;
    return 0;
}
