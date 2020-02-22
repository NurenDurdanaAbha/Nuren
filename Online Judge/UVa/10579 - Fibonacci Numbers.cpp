#include<stdio.h>

int main()
{
    double f[1000],i,n;

    while(scanf("%lf",&n)!=EOF)
    {
    f[0]=0;
    f[1]=1;
    f[2]=1;

    for(i=3; i<n; i++)
    {
        f[i] = f[i-1] + f[i-2];
    }

        printf("%.0lf\n",f[n-1]);
    }


    return 0;
}
