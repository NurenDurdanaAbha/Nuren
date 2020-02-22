#include<stdio.h>

int main()
{
    int a[1000],i,sum=0,n,*pa;

    pa=a;

    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        scanf("%d",&(*(pa+i)));
        sum= sum+ (*(pa+i));
    }

    printf("%d\n",sum);

    return 0;
}
