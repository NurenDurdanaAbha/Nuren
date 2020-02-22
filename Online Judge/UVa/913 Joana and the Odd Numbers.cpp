#include<stdio.h>

int main()
{
    long long int r,c,sum;

    while(scanf("%lld",&c)!=EOF)
    {
        r = (c/2)+1;
        sum = ((2*r*r)-1) + ((2*r*r)-1)-2 + (((2*r*r)-1)-2)-2;

        if(c==2)
            sum=0;

        printf("%lld\n",sum);

    }

    return 0;
}
