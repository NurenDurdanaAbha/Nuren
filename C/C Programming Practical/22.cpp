#include<stdio.h>
int main()
{
    int reverse,n,i=1;

     scanf("%d",&n);

    while(n>0)
    {
        reverse=n%10;
        n=n/10;

         printf("%d",reverse);

         i++;
    }

    return 0;
}
