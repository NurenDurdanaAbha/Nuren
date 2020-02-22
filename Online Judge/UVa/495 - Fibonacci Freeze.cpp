#include<stdio.h>

int main()
{
    double n;
    int f[1000],i;

    while(scanf("%lf",&n)!=EOF)
    {

    f[0]=1;
    f[1]=1;
    for(i=2; i<n; i++)
    {
        f[i] = f[i-1] + f[i-2];
    }

    printf("The Fibonacci number for %.0lf is %d\n",n,f[n-1]);
    }


    return 0;
}
