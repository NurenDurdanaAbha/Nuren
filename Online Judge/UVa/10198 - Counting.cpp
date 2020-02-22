#include<stdio.h>

int main()
{
    int a,sum,i;

    while(scanf("%d",&a)!=EOF)
    {
        sum=0;
        for(i=1;i<=a; i++)
        {
            if(i==4)
            sum=sum+1;
        else
           sum=sum+i;
        }

           printf("%d\n",sum);
    }

    return 0;
}
