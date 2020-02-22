#include<stdio.h>

int main()
{
    int a,b,c,count=0,sum,d;
    char sign;

    while(scanf("%d%c%d=%d",&a,&sign,&b,&c)!=EOF)
    {
        sum=0;
        if(sign == '+')
        {
            sum = a+b;
            if(sum == c)
                count++;
        }

        d=0;
        if(sign == '-')
        {
            d = a-b;
            if(d == c)
                count++;
        }
    }
    printf("%d\n",count);


    return 0;
}
