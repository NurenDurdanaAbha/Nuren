#include<stdio.h>

int main()
{
    int LA[100],j,k,n,item;

    scanf("%d",&n);
    for(j=0; j<n; j++)
        scanf("%d",&LA[j]);

    scanf("%d",&k);
    item = LA[k];

    j=k;
    while(j<=n-1)
    {
        LA[j]=LA[j+1];
        j+=1;
    }

    n=n-1;

    for(j=0; j<n; j++)
        printf("%d ",LA[j]);


    return 0;
}
