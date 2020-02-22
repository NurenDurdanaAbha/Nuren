#include<stdio.h>

int main()
{
    long long int f[1000],i,n;

    while(scanf("%lld",&n)!=EOF)
    {
        if(n==0)
            break;

    f[0]=1;
    f[1]=2;
    for(i=2; i<n; i++)
    {
        f[i] = f[i-1] + f[i-2];
    }

    printf("%lld\n",f[n-1]);
    }


    return 0;
}
