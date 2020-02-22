#include<stdio.h>
int main()
{
    int a[1000],i,j,item,temp;

    scanf("%d",&item);

    for(i=1; i<=item; i++)
    {
        scanf("%d",&a[i]);
    }

    for(i=1; i<=item; i++)
    {
        for(j=1; j<=item-i; j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }

    for(i=1; i<=item; i++)
    {
        printf("%d  ",a[i]);
    }

    return 0;
}
