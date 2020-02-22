#include<stdio.h>
int main()
{
    int n,i,s=0;
    scanf("%d",&n);
    for(i=1; i<=(3*n-2); i=i+3);
    {
        s=s+i;
    }
    printf("%d",s);
    return 0;
}
