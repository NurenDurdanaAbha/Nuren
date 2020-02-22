#include<stdio.h>

int main()
{
    float a,c;
    int b;

    scanf("%f",&a);

    b= int(a);
    c=a-b;

    printf("int part: %d\nfloat part: %.2f\n",b, c);

    return 0;
}
