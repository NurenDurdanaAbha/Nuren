#include<stdio.h>
#include<math.h>

int main()
{
    int a[1000],i,j,n;

    scanf("%d",&n);

    for(i=1; i<=n; i++)
    {
        a[i]=1;
    }

    for(i=2; i<=sqrt(n); i++)
    {
        if(a[i]==1)
            for(j=i+i; j<=n; j+=i)
        {
            a[j]=0;
        }
    }

    for(i=2; i<=n; i++)
    {
        if(a[i]==1)
        {
            printf("%d   ",i);
        }
    }
    return 0;
}
