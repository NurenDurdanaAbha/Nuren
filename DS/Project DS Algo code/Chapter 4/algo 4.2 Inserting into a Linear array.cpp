#include<stdio.h>

int main()
{
    int LA[100],j,k,n,item;

    scanf("%d",&n);
    for(j=0; j<n; j++)
        scanf("%d",&LA[j]);

    scanf("%d",&k);
    scanf("%d",&item);

    j=n;
    while(j>=k)
    {
        LA[j+1]=LA[j];
        j-=1;
    }

    LA[k]=item;
    n=n+1;

    for(j=0; j<n; j++)
        printf("%d ",LA[j]);


    return 0;
}
