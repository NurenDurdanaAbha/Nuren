#include<stdio.h>
#include<iostream>

using namespace std;

int main()
{
    int test,t,x,y,z;

    cin>>test;
    for(t=1; t<=test; t++)
    {
        cin>>x>>y>>z;

        if((y>x && y<z) || (y<x && y>z))
            printf("Case %d: %d\n",t,y);
        else if((x>y && x<z) || (x<y && x>z))
            printf("Case %d: %d\n",t,x);
        else
            printf("Case %d: %d\n",t,z);
    }


    return 0;
}
