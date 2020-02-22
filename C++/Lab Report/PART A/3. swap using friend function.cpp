#include<iostream>
using namespace std;

class PQR;
class ABC
{
    int a;
public:
    void get_data()
    {
        cout<<"Enter first number: ";
        cin>>a;
    }
    void display()
    {
        cout<<"First number: "<<a<<endl;
    }
    friend void swap(ABC &, PQR &);
};

class PQR
{
    int p;
public:
    void get_data()
    {
        cout<<"Enter second number: ";
        cin>>p;
    }
    void display()
    {
        cout<<"Second number: "<<p<<endl;
    }
    friend void swap(ABC &, PQR &);
};

void swap(ABC &A, PQR &P)
{
    int temp;
    temp = A.a;
    A.a = P.p;
    P.p = temp;
}

int main()
{
    ABC A;
    A.get_data();

    PQR P;
    P.get_data();

    cout<<"\nBefore swapping"<<endl;
    A.display();
    P.display();

    swap(A,P);

    cout<<"\nAfter swapping"<<endl;
    A.display();
    P.display();

    return 0;
}
