#include<stdio.h>

int main()
{
    int a[1000],i,j,n,temp,count,t,k;

    scanf("%d",&t);
    for(k=1; k<=t; k++)
    {
    scanf("%d",&n);
    for(i=0; i<n; i++)
        scanf("%d",&a[i]);

        count = 0;
    for(i=0; i<n-1; i++)
    {
        for(j=0; j<n-1-i; j++)
        {
            if(a[j] > a[j+1])
            {
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;

                 count++;
            }
        }
    }

    printf("Optimal train swapping takes %d swaps.\n",count);
    }

    return 0;
}
