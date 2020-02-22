#include<stdio.h>
#include<math.h>
int main()
{
     long long int a,n,i;

    scanf("%lld",&n);

     a=sqrt(n);

     for(i=1; i<=1000000000; i++)
     {
        if(n==a*a)
      {
          printf("%d is a square number\n",n);
          return 0;
      }
        else
      {
          printf("%d is not a square number\n",n);
          return 0;
      }
    }

    return 0;
}
