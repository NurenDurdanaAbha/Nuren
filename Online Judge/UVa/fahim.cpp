#include<stdio.h>
#include<math.h>

int main()
{
    int n;
    while(scanf("%d",&n)!=EOF)
    {
        if(n==0)
            break;

        int i,r=0,m=0,b=0;
        float k;
        for(i=1;i<=n;i++)
        {
            r = i*i*i;
            if(n<r)
                break;
        }
       // printf("%d %d\n",i,r);

        m = r - n;
      //  printf("%d\n",m);

        k = pow(m,(1.0/3));

      //  printf("%.0f\n",k);

        if(k*k*k==m)
        b = r-m;
        //printf("%d\n",b);
        if(n==b)
            printf("%d %.0f\n",i,k);
        else
            printf("No solution\n");


    }

    return 0;
}
