#include<stdio.h>

int main()
{
    int t, c, r,i,a;

    scanf("%d",&t);
    for(i=1; i<=t; i++)
    {
        scanf("%d%d",&r,&c);

        a = (r/3)*(c/3);

        printf("%d\n",a);
    }

    return 0;
}
