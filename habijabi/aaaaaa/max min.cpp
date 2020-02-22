#include<stdio.h>

int main()
{
    int a[1000],max,min,i,n;

    scanf("%d",&n);
    for(i=1;i<=n;i++)
        scanf("%d",&a[i]);

    max=a[1];
    min=a[n];


    for(i=1;i<=n;i++)
    {
        if(a[i]>max)
            max=a[i];
    }

    for(i=1;i<=n;i++)
    {
        if(a[i]<min)
            min=a[i];
    }

    printf("Max=%d\n",max);
    printf("Min=%d\n",min);


    return 0;
}
