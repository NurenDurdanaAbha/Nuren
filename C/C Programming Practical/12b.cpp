#include<stdio.h>
int main()
{
     long long int i,n;
    scanf("%lld",&n);

    for(i=1; i<=n; i++)
    {
        if(i%3==0 || i%5==0)
            printf("%lld\n",i);
    }
    return 0;
}
