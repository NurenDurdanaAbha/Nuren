#include<stdio.h>

int main()
{
    int n, sum,a[1000],i,b,brick,k=1;

    while(scanf("%d",&n)!=EOF)
    {
    if(n==0)
        break;

        sum=0;
    for(i=1; i<=n; i++)
    {
        scanf("%d",&a[i]);
        sum  = sum + a[i];
    }

         b = sum /n;

         brick=0;
         for(i=1; i<=n; i++)
         {

             if(b<a[i])
                   brick = brick + (a[i] - b);

         }
         printf("Set #%d\nThe minimum number of moves is %d.\n\n",k++,brick);
    }

    return 0;
}
