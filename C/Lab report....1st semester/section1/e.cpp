#include<stdio.h>

int main()
{
    int f=1,n,i;

    scanf("%d",&n);

    for(i=1; i<=n; i++)
    {
        f=f*i;
    }

    printf("%d\n",f);

    return 0;
}
