#include<stdio.h>

int main()
{
    int t,i,k,n,count0=1;

    scanf("%d",&t);
    for(k=1; k<=t; k++)
    {
        scanf("%d",&n);
        for(i=0; i<=n; i++)
        {
            if(i==1)
                count0++;
        }

        printf("%d\n",count0);
    }



    return 0;
}
