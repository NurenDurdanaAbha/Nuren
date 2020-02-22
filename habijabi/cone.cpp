#include<stdio.h>
#include<math.h>
#define pi 3.1416
int main()
{
    float A,r,h;
    scanf("%f%f",&r,&h);
    A=pi*r*(r+pow((h*h+r*r),.5));
    printf("%f",A);
    return 0;
}
