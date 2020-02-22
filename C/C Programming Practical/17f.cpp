#include<stdio.h>

int main()
{
    int i,s=0,n;

    scanf("%d",&n);

    for(i=2; i<=n; i++)
    {
        s=s+ (i-1)*i*((i-1)*i);
    }

    printf("%d\n",s);

    return 0;
}
