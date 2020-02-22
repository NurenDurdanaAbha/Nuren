#include<stdio.h>
#include<math.h>

int main()
{
    int n,i,sum;

    while(scanf("%d",&n)!=EOF)
    {
        if(n==0)
            break;

        sum=0;
        for(i=1; i<=n; i++)
            sum = sum + pow(i,2);

        printf("%d\n",sum);
    }


    return 0;
}
