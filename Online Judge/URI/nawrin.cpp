#include<stdio.h>

int main()
{
    int i,n,s=0;

    scanf("%d",&n);

    for(i=2; i<=n; i++)
    {
        s = s + i*(i-1);
    }

    printf("%d\n",s);


    return 0;
}
