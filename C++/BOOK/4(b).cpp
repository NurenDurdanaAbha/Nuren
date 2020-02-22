#include<iostream>

using namespace std;

class shape
{
    public:
            int a,height,width;
            virtual int area() = 0;
};

class rectangle : public shape
{
    public:
        rectangle(int m,int n)
        {
            height = m;
            width = n;
        }
        int area()
        {
            return height*width;
        }
};

class square:public shape
{
    public:
        square(int n)
        {
            a=n;
        }
        int area()
        {
            return a*a;
        }
};


int main()
{
    rectangle a(5,7);
    square b(5);

    cout<<"Area of rectangle: "<<a.area()<<endl;
    cout<<"Area of square: "<<b.area()<<endl;

    return 0;
}
