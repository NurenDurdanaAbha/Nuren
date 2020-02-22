#include<stdio.h>

int main()
{
    int a[1000],n,temp,i,j,count;

    while(scanf("%d",&n)!=EOF)
    {
        for(i=0; i<n; i++)
            scanf("%d",&a[i]);

            count=0;
for(i=0; i<n-1; i++)
    {
        for(j=0; j<n-1-i; j++)
        {
            if(a[j] > a[j+1])
            {
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;

                count++;
            }
        }
    }

    printf("Minimum exchange operations : %d\n",count);

    }

    return 0;
}
