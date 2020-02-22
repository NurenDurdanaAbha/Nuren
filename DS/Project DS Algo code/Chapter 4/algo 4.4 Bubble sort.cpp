#include<stdio.h>

int main()
{
    int b[1000],i,j,n,temp;

    scanf("%d",&n);
    for(i=0; i<n; i++)
        scanf("%d",&b[i]);

    for(i=0; i<n; i++)
    {
        j=0;
        while(j<n-1)
        {
            if(b[j]>b[j+1])
            {
                temp=b[j];
                b[j]=b[j+1];
                b[j+1]=temp;
            }
            j++;
        }
    }

    for(i=0; i<n; i++)
        printf("%d ",b[i]);

    return 0;
}
