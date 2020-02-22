#include<stdio.h>

int main()
{
    int a[1000], i, n, item, loc=-1;

    scanf("%d",&n);
    for(i=0; i<n; i++)
        scanf("%d",&a[i]);

    scanf("%d",&item);

    for(i=0; i<n; i++)
    {
        if(a[i]==item)
        {
            loc=i+1;
        }
    }

    if(loc==-1)
        printf("%d is not found\nlocation = %d",item,loc);
    else
        printf("%d is found at location %d",item,loc);

    return 0;
}
