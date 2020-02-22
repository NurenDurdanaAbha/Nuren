#include<stdio.h>

int main()
{
    int a[20000], i,j;

    a[1] = 1;

    for(i=1; i<=1501; i++)
    {
        if(i%2==0 && i%7!=0 || i%3==0 && i%7!=0 || i%5==0 && i%7!=0 || i%2==0 && i%3==0 || i%2 ==0 && i%5==0 || i%3==0 && i%5==0)
        {
          a[j] = i;
        }
    }

    for(j=1; j<=1501; j++)
        printf("%d ",a[j]);

     return 0;
}
