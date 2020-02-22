#include<stdio.h>

int solveMeFirst(int x, int y)
{
    int a=x+y;
    return a;
}


int main()
{
    int x,y,sum=0;

    printf("x = ");
    scanf("%d",&x);

    printf("y = ");
    scanf("%d",&y);

    sum=solveMeFirst(x,y);

    printf("%d\n",sum);

    return 0;
}
