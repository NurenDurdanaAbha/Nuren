#include<stdio.h>

int main()
{
    int  a[100],i,item,n,loc;

    scanf("%d",&n);

    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }

    scanf("%d",&item);

    for(i=0; i<n; i++)
    {
        if(a[i]==item)
        {
        loc=i+1;
         printf("%d is found at location:  %d \n",item,loc);
        }
    }
    return 0;
}
