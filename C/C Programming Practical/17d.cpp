#include<stdio.h>
int main()
{
    int s=0,i,n;
    scanf("%d",&n);

    for(i=1; i<=n; i++)
    {
        s=s+(i*i);
    }
     printf("%d\n",s);

    return 0;
}
