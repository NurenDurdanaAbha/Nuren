#include<stdio.h>

int main()
{
    int   i,n,first, last, middle, item, a[1000];

    scanf("%d",&n);
    for(i=0; i<n; i++)
        scanf("%d",&a[i]);

    scanf("%d",&item);

    first = 0;
    last = n-1;
    middle = (first + last)/2;

    while(first <= last)
    {
        if(a[middle] > item)
        {
            first = middle +1;
        }

        else if(a[middle == item])
        {
            printf("%d is found at location %d\n", item, first);
        }

        else
        {
            last = middle - 1;
        }
    }

    if(first > last)
    {
        printf("%d is not found\n",item);
    }

    return 0;
}
