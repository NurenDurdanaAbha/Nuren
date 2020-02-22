#include<stdio.h>
int main()
{
    long long int n,i,j,count,max;

    while(scanf("%lld%lld",&i,&j)!=EOF)
    {
        printf("%lld %lld ",i,j);
        max = 0;

    if(i<j)
    {
        while(i<=j)
        {
            count = 1;
            n=i;
            while(n!=1)
            {
                if(n%2!=0)
                    n = 3*n+1;
                else
                    n=n/2;

                count++;
            }
            if(count > max)
                max = count;
                i++;
            }
    }
    else
        {
            while(j<=i)
            {
                count = 1;
                n=j;

                while(n!=1)
                {
                    if(n%2!=0)
                        n = 3*n+1;
                    else
                        n=n/2;

                    count++;
                }


                if(count > max)
                    max = count;
                    j++;
            }
        }

        printf("%lld\n",max);
    }

    return 0;
}
