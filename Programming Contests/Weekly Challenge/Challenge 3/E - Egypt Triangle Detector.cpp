#include<stdio.h>

int main()
{
    long long int a,b,c,max;

    while(scanf("%lld%lld%lld",&a,&b,&c)!=EOF)
    {
        if(a==0&&b==0&&c==0)
            break;

        max = a;
        if(b>max)
            max = b;
        if(c> max)
            max = c;

        if((a == max && a*a == (b*b + c*c)) || (b == max && b*b == (a*a + c*c)) || (c == max && c*c == (b*b + a*a)))
            printf("right\n");
        else
            printf("wrong\n");
    }

    return 0;
}
