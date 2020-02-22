#include<iostream>
#include<stdio.h>
#include<cmath>

using namespace std;

int main()
{
    double a,b,c,s,r;
    int test,t;

    cin>>test;
    for(t=1; t<=test; t++)
    {
        cin>>a>>b>>c;

        s=(a+b+c)/2;

        r=sqrt(((s-a)*(s-b)*(s-c))/s);

        printf("Case #%d: %.2lf\n",t,r);
    }



    return 0;
}
