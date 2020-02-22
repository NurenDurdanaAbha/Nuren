#include<stdio.h>

int main()
{
    int t,a[10000],i,k,n,count=1,count1,count2;

    scanf("%d",&t);
    for(k=1; k<=t; k++)
    {
        scanf("%d",&n);
        for(i=1; i<=n; i++)
            scanf("%d",&a[i]);

         count1 = 0;
        for(i=1; i<=n-1; i++)
        {
            if(a[i] < a[i+1])
            {
                count1++;
            }
        }

         count2 = 0;
        for(i=1; i<=n-1; i++)
        {
            if(a[i] > a[i+1])
            {
                count2++;
            }
        }
        printf("Case %d: %d %d\n",count++,count1,count2);
    }

    return 0;
}
