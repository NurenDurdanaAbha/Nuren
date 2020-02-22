#include<stdio.h>
int main()
{
    int i,n,x,s=0;
    scanf("%d",&n);

    for(i=1; i<=n; i++)
    {
        scanf("%d",&x);
        s=s+x;
    }
    printf("%d",s);

    return 0;
}
