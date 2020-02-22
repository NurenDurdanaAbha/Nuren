#include<iostream>

using namespace std;

int a[10];

int main()
{
    int y,i=1,a,b,c,d,n;

    cin>>y;
    n=y;
    while(1)
    {
       y=n+ i++;

      // cout<<y<<endl;

       d=y%10;
       y/=10;

       c=y%10;
       y/=10;

       b=y%10;
       y/=10;

       a=y%10;
       y/=10;

       if(a!=b && a!=c && a!=d && b!=c && b!=d && c!=d)
       {
          cout<<a<<b<<c<<d<<endl;
          break;
       }

    }


    return 0;
}
