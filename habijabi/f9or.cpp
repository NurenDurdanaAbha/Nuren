#include<stdio.h>

int main()
{
    int n,d,a,b,x;
    float y,c;

    printf("Enter a number:  ");
    scanf("%d",&n);
    printf("Enter another number:  ");
    scanf("%d",&d);

    a=n+d;
    b=n-d;
    x=n*d;
    y=n/d;
    c=n%d;

    printf("\n a= %d\n b= %d\n x= %d\n y= %f\n c= %f\n",a,b,x,y,c);
    return 0;
}
