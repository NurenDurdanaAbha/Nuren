#include<stdio.h>
int main()
{
    double i,n,s=0;
    scanf("%lf",&n);
    for(i=1; i<=n; i++)
    {
        s=s+1/i;
    }
    printf("%lf",s);
    return 0;
}
