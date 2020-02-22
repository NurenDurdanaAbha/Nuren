#include<stdio.h>
#include<math.h>

int main()
{
    int p[1000],i,j,a,b;

    scanf("%d %d",&a,&b);

    for(i=1; i<=b; i++)
    {
        p[i]=1;
    }

    for(i=2; i<=sqrt(b); i++)
    {
        if(p[i]==1)
            for(j=i+i; j<=b; j+=i)
        {
            p[j]=0;
        }
    }

    for(i=a; i<=b; i++)
    {
        if(p[i]==1)
        {
            printf("%d   ",i);
        }
    }

    return 0;
}
