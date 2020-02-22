#include<stdio.h>
int calculator(int x, int y)
{
    int z;
    z=x+y;
    return z;
}
int main()
{
    int a,b,c;
    scanf("%d%d",&a,&b);
    c=a+b;
    printf("%d\n",c);
    return 0;
}
