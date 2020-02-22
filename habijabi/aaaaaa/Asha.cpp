#include<stdio.h>

int main()
{
    int x,y;

    printf("Enter the value of x= ");
    scanf("%d",&x);

    y=(x=0)?1:((x==0)?0:-1);

    printf("Enter the value of y= %d\n",y);


    return 0;
}
