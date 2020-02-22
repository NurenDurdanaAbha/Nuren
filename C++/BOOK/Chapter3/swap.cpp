#include<iostream>

using namespace std;

int swap(int &a, int &b)
{
    int temp;

    cout<<"a: "<<a<<endl<<"b: "<<b<<endl;

    temp=a;
    a=b;
    b=temp;

    cout<<"a: "<<a<<endl<<"b: "<<b<<endl;

    return a;
    return b;
}


int main()
{
    int a,b;
    cin>>a>>b;

    cout<<"a: "<<a<<endl<<"b: "<<b<<endl;

    swap(a,b);

    cout<<"a: "<<a<<endl<<"b: "<<b<<endl;

    return 0;
}
