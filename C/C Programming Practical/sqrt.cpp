#include<stdio.h>
#include<math.h>
int main()
{
    int a,n;

    scanf("%d",&n);

     a=sqrt(n);

    if(n==a*a)
    {
        printf("%d is a square number",n);
    }
    else
    {
        printf("%d is not a square number",n);
    }

    return 0;
}
