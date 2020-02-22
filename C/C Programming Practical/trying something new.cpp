#include<stdio.h>

int main()
{
    int  r,c,n,p=1;

    scanf("%d",&n);

    for(r=1; r<=n; r++)
    {
        for(c=1; c<=r; c++)
        {
            printf("%d",p*p);
            break;
        }
        p=((p*10)+1);
        printf("\n");
    }

    return 0;
}
