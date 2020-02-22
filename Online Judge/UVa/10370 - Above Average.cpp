#include<stdio.h>

int main()
{
    int n,a[10000],sum,i,j,t,count,ave;
    float abvAve;

    scanf("%d",&t);
       for(j=1; j<=t; j++)
    {

    scanf("%d",&n);
    for(i=1; i<=n; i++)
        scanf("%d",&a[i]);

        sum = 0;
     for(i=1; i<=n; i++)
            sum = sum + a[i];

     ave = sum/n;

     count = 0;
     for(i=1; i<=n; i++)
     {
         if(a[i] > ave)
            count++;
     }

     abvAve = (float(count)/float(n))* 100.0;

    printf("%.3f%%\n",abvAve);
    }

    return 0;
}
