#include<stdio.h>
int main()
{
    int s=0,i,n;
    scanf("%d",&n);

    for(i=2; i<=2*n; i=i+2)
    {
        s=s+i;
    }
     printf("%d\n",s);

    return 0;
}
