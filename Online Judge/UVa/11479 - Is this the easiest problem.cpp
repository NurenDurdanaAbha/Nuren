#include<stdio.h>

int main()
{
    long long int a,b,c,t,i,count=1;

    scanf("%lld",&t);
    for(i=1; i<=t; i++)
    {
        scanf("%lld%lld%lld",&a,&b,&c);

        if(a+b<=c || b+c <=a || c+a<= b)
            printf("Case %lld: Invalid\n",count++);

        else if(a==b && b ==c  && c == a)
            printf("Case %lld: Equilateral\n",count++);

        else if(a==b || b==c || c==a)
            printf("Case %lld: Isosceles\n",count++);

        else if(a!=b && b!=c && c!=a)
            printf("Case %lld: Scalene\n",count++);

    }

    return 0;
}
