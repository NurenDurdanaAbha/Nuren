#include<stdio.h>

int main()
{
    int a[1000],n,i,f=1,j;

    scanf("%d",&n);
    for(i=0; i<n; i++)
        scanf("%d",&a[i]);

    for(i=0; i<n; i++)
    {
        f=1;
        for(j=2; j<n; j++)
        {
            if(a[i]%j==0)
            {
            f=2;
            break;
            }
        }

    if(f==1)
        printf("%d  ",a[i]);
    }

    return 0;
}
