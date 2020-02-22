#include<stdio.h>
int main()
{
    int s=0,i,n;
    scanf("%d",&n);

    for(i=1; i<=(2*n-1); i=i+2)
    {
        s=s+i;
    }
     printf("%d\n",s);

    return 0;
}
