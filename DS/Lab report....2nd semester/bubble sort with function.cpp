#include<stdio.h>


void bubble_sort(int b[] , int n)
{
    int i,j,temp;

    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            if(b[j] > b[j+1])
            {
                 temp = b[j];
                 b[j] = b[j+1];
                 b[j+1] = temp;
            }
        }
    }

     for(i=0; i<n; i++)
        printf("%d ",b[i]);
}


int main()
{
    int b[1000],i,n;

    scanf("%d",&n);
    for(i=0; i<n; i++)
        scanf("%d",&b[i]);

     bubble_sort(b, n);

        return 0;
}
