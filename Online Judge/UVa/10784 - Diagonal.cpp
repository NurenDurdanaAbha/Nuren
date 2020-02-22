#include<stdio.h>
#include<math.h>

int main()
{
    long long int n,i=1,e;
    double d;

    while(scanf("%lld",&n)!=EOF)
    {
        if(n==0)
            break;

        d = (3+sqrt(9+(n*8)))/2.0;

        e = int(d);


        if(e==d)
            printf("Case %lld: %lld\n",i++,e);
        else
            printf("Case %lld: %lld\n",i++,e+1);
    }



    return 0;
}
