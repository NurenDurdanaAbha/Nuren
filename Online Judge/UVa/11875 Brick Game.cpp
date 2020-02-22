#include<stdio.h>

int main()
{
    int i, j,a[1000],n,t,d=1;

    scanf("%d",&t);
    for(i=1; i<=t; i++)
    {
        scanf("%d",&n);
        for(j=1; j<=n; j++)
            scanf("%d",&a[j]);

        printf("Case %d: %d\n",d++,a[(j+1)/2]);

    }

    return 0;
}
