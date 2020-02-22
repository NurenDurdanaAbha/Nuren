#include<iostream>

using namespace std;

void swap(int &x, int &y)
{
    int temp;

    temp=x;
    x=y;
    y=temp;

    cout<<"In swap function=>"<<endl<<"x: "<<x<<" y: "<<y<<endl<<endl;
}


int main()
{
    int x,y;

    cin>>x>>y;

    cout<<"In main function before swap=>"<<endl<<"x: "<<x<<" y: "<<y<<endl<<endl;

    swap(x,y);

    cout<<"In main function after swap=>"<<endl<<"x: "<<x<<" y: "<<y<<endl<<endl;


    return 0;
}
