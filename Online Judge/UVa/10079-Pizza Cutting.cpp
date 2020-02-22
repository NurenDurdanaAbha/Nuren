#include<stdio.h>

int main()
{
    long long int n,a;

    while(scanf("%lld",&n)!=EOF)
    {
        a = (n*(n+1))/2 +1;

        printf("%lld\n",a);
    }

    return 0;
}
