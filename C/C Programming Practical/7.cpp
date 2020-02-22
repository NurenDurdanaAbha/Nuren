#include<stdio.h>

int main()
{
    int n,i,max=0,x;

    scanf("%d",&n);

    for(i=1; i<=n; i++)
    {
        scanf("%d",&x);

        if(max<x)
            max=x;
    }

    printf("%d",max);

    return 0;
}
