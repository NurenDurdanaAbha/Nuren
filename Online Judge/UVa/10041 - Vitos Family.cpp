#include<stdio.h>

int main()
{
    int t,n,a[1000],i,j,k,temp,Me,diff;

    scanf("%d",&t);
    for(k=0; k<t; k++)
    {
        scanf("%d",&n);
        for(i=1; i<=n; i++)
            scanf("%d",&a[i]);

            for(i=1; i<=n-1; i++)
    {
        for(j=1; j<=n-1; j++)
        {
            if(a[j] > a[j+1])
            {
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }

    if(n%2==0)
        Me = a[(n/2)];
   else
       Me = a[(n+1)/2];

       diff=0;
    for(i=1; i<=n; i++)
    {
        if(a[i] > Me)
            diff = diff + (a[i] -  Me);
        else
           diff = diff + (Me - a[i]);
    }

    printf("%d\n",diff);


    }

    return 0;
}
