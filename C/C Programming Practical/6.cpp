#include<stdio.h>
int main()
{
    int a,b,c,max;
    printf("Enter the three  number : ");
    scanf("%d%d%d",&a,&b,&c);

    max=a;
    if(max<b)
    max=b;

    if(max<c)
    max=c;

    printf("Maximum: %d",max);


    return 0;
}
