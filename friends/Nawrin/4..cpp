#include<stdio.h>

int main()
{
    int l,b,perimeter,area;

    scanf("%d%d",&l,&b);

    perimeter = 2*(l+b);
    printf("Perimeter of rectangle: %d\n",perimeter);

    area = l*b;
    printf("Area of rectangle: %d\n",area);

    return 0;
}
