#include<iostream>
#include<stdio.h>

using namespace std;

int main()
{
    float a,b,c,test,t,x,y,z;

    cin>>test;
    for(t=1; t<=test; t++)
    {
        cin>>a>>b>>c;

        x=(a+b)/3;
        y=c/x;
        a=a-x;
        z=y*a;

       cout<<z<<endl;

    }


    return 0;
}
