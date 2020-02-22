#include<stdio.h>

int main()
{
    int i,j,n,t,a[1000];

    for(j=1; j<=75; j++)
    {
        scanf("%d",&n);

        if(n==0)
            break;

        t=0;
        for(i=1; i<=n; i++)
        {
            scanf("%d",&a[i]);

        if(a[i] == 0)
            {
                t++;
            }
        }

        printf("Case %d: %d\n",j, (n-t)-t);
    }

    return 0;
}
