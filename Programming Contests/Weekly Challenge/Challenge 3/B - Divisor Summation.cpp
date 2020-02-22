#include<stdio.h>
#include<math.h>

int main()
{
    int t,test,i,n,sum;

    scanf("%d",&test);
    for(t=1; t<=test; t++)
    {
        scanf("%d",&n);
        sum=0;
        for(i=1; i<=n/2; i++)
        {
            if(n%i==0)
                sum = sum + i;
        }

        printf("%d\n",sum);
    }


    return 0;
}
