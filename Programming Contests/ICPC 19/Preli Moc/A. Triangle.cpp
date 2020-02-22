#include<iostream>

using namespace std;

int main()
{
    int a,b,c;

    cin>>a>>b>>c;

    if(a==b && b==c && a==c)
    {
      cout<<"Equilateral Triangle"<<endl;
      return 0;
    }

    else if(a==b || a==c || b==c)
    {
        cout<<"Isosceles Triangle"<<endl;
        return 0;
    }
    else
        cout<<"Bad Triangle"<<endl;


    return 0;
}
