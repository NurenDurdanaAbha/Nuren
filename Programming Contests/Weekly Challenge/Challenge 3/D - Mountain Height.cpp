#include<stdio.h>

int main()
{
    int a[12],n,temp,i,j;

        for(i=1; i<=10; i++)
            scanf("%d",&a[i]);

for(i=1; i<=10; i++)
    {
        for(j=1; j<=10-i; j++)
        {
            if(a[j] < a[j+1])
            {
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }

    for(i=1; i<=3; i++)
            printf("%d\n",a[i]);


    return 0;
}
