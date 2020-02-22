#include<stdio.h>
int main()
{
    long long int i,a,b;

    scanf("%lld %lld",&a, &b);

    for(i=a;i<=b; i++)
    {
        printf("%lld\n",i);
    }
    return 0;
}
