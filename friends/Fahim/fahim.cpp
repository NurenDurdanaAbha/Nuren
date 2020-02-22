#include<stdio.h>
int main()
{
    int x,y,x1;
    float z,z1;
    scanf("%d%d",&x,&y);
    x=1,x=(float)4.00,z=x*y;
    x1=2,x1=(float)4.50,z1=x1*y;

    if(x=1)
        printf("Total: R$ %f",z);
    else if(x1=2)
        printf("Total: R$ %f",z1);
    return 0;
}
