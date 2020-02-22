#include<stdio.h>
int main()
{
    int i,n=10,s=0;
    for(i=1; i<=n; i++)
    {
        s=s+(i*i);
    }
    printf("%d\n",s);
    return 0;
}
