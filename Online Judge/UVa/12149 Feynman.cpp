#include<stdio.h>

int main()
{
    int i,n,sum;

    while(scanf("%d",&n)!=EOF)
    {
        if(n==0)
            break;

        sum = 0;
        for(i=1; i<=n; i++)
            sum = sum + (i*i);

        printf("%d\n",sum);
    }


    return 0;
}
