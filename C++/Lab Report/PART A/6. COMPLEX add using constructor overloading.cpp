#include<iostream>
using namespace std;

class complex
{
    int real;
    int imag;
public:
    complex(){}
//    complex(int c)
//    {
//        real = c;
//        imag = c;
//    }
    complex(int r, int i)
    {
        real = r;
        imag = i;
    }
    complex sum(complex A, complex B)
    {
        real = A.real + B.real;
        imag = A.imag + B.imag;
    }
    void display()
    {
        cout<<real<<"+"<<imag<<"i"<<endl;
    }
};


int main()
{
//    cout<<"Constructor with one arguments."<<endl;
//    complex c1(10),c2(20),c3;
//    c3.sum(c1,c2);
//    c3.display();

  //  cout<<"\nConstructor with two arguments."<<endl;
    complex d1(1,2),d2(3,4),d3;
    d3.sum(d1,d2);
    d3.display();

    return 0;
}
