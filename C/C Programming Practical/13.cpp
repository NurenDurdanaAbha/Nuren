#include<stdio.h>
int main()
{
    long long int i,a,b;

    scanf("%lld %lld",&a,&b);

    for(i=a;i<=b; i++)
    {
        if(i%2==0)
        {
            printf("even: %lld\n",i);
        }
        if(i%2!=0)
        {
            printf("odd: %lld\n",i);
        }
    }
   return 0;
}
