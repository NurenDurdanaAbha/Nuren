#include<iostream>
#include<stdio.h>

using namespace std;

int main()
{
    double x,n,a,X;
    int t=1;

    while(scanf("%lf",&n)!=EOF)
    {
        X=2.1;
        x=X;
        x*=2.0;
        n/=2.0;
        a=x+n;
        a/=2.0;
        a-=X;

        printf("Person %d: %.2lf\n",t++,a);
    }

    return 0;
}
