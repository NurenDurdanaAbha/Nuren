#include<stdio.h>

int main()
{
    int a[1000],i,n,item,loc=1;

    scanf("%d",&n);
    for(i=0; i<n; i++)
        scanf("%d",&a[i]);

    scanf("%d",&item);
    a[n+1]=item;

    while(a[loc]!=item)
    {
        loc++;
    }

    if(loc==n+1)
       loc=0;

    printf("%d",loc);

    return 0;
}
