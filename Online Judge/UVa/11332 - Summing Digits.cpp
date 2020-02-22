#include<stdio.h>

int main()
{
    long long int r,n,sum;

  while(scanf("%lld",&n)!=EOF)
  {
      if(n==0)
        break;

      while(1)
      {
          sum =0;
    while(n!=0)
    {
        r = n%10;
        n = n/10;

        sum = sum +r;
    }

        if(sum/10!=0)
            n=sum;
        else
            break;

      }

       printf("%lld\n",sum);
  }

    return 0;
}
