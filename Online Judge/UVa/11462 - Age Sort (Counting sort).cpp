#include<stdio.h>

int main()
{
    int i,j,k,a[100000];
    long long n,x,max;

    while(scanf("%lld",&n)!=EOF)
    {
        if(n==0)
            break;

        int b[100000] = {0};

        max=0;
    for(i=1; i<=n; i++)
    {
        scanf("%lld",&x);

        if (max< x)
       max  = x;

        b[x]++;
    }

   int  p=1;
  for(x=1; x<=max; x++)
  {
      for(k=1; k<=b[x]; k++)
      {
        printf("%lld",x);
        if(p!=n)
            printf(" ");
            p++;
      }
  }
  printf("\n");
    }


    return 0;
}
