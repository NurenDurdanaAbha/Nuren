#include<stdio.h>
#include<math.h>
int main()
{
    int n;
    while(scanf("%d",&n)!=EOF)
    {
        if(n==0)
            break;

        int i,r,m;
        float k;
        for(i=1;i<=n;i++)
        {
            r = i*i*i;
            if(n<r)
                break;
        }
         printf("%d %d\n",i,r);
        m = r - n;
          printf("%d\n",m);
        k = pow(m,(1.0/3));
           printf("%.0f\n",k);

        int f= int(k);

        if(n==(i*i*i-k*k*k))
            printf("%d %d\n",i,f);
        else
            printf("No solution\n");


    }

    return 0;
}
