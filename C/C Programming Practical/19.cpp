#include<stdio.h>
#include<math.h>
int main()
{
     long long int square,n,i,a,b;

    scanf("%lld  %lld %lld",&n, &a, &b);

     square=sqrt(n);

     for(i=a; i<=b; i++)
     {
        if(n==square*square)
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
