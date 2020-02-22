#include<stdio.h>

int main()
{
    long long int x,y,a,b,test,sum,d;
    int t=1,i;

    scanf("%d",&test);
    while(t<=test)
          {
              scanf("%lld%lld%lld%lld",&x,&a,&y,&b);

              sum=a;
              d=b-a;

              for(i=x-1; i>0; i--)
              {
                  sum=sum-d;
              }

               printf("Case %d: %ld\n",t++,sum);
          }

    return 0;
}
