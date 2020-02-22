#include<stdio.h>

int main()
{
    int a[1000],i,n,*pa;

    pa=a;

    scanf("%d",&n);

    for(i=0; i<n; i++)
        scanf("%d",&(*(pa+i)));

    for(i=n-1; i>=0; i--)
        printf("%d ",(*(pa+i)));

    return 0;
}
