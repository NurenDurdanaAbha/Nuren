#include<stdio.h>

int main()
{
    int a,b,r,min;

    scanf("%d%d%d",&a,&b,&r);

    if(a>b)
        min=b;
    else
        min=a;

    if(2*r<=min)
        printf("First\n");
    else
        printf("Second\n");



    return 0;
}
