#include<stdio.h>
int main()
{
    float s,t1,t2,r1,r2,c;

    printf("\t\t\tSQUARE\n");
    printf("Input the side:");
    scanf("%f",&s);
    printf("The area of the square: %.4f\n\n\n",s*s);

    printf("\t\t\tTRIANGLE\n");
    printf("Input the base: ");
    scanf("%f",&t1);
    printf("Input the height: ");
    scanf("%f",&t2);
    printf("The area of the triangle: %.4f\n\n\n",.5*t1*t2);

    printf("\t\t\tRECTANGLE\n");
    printf("Input the width: ");
    scanf("%f",&r1);
    printf("Input the height: ");
    scanf("%f",&r2);
    printf("The area of a rectangle: %.4f\n\n\n",r1*r2);

    printf("\t\t\tCIRCLE\n");
    printf("Input the radius: ");
    scanf("%f",&c);
    printf("The area of a circle: %.4f\n\n\n",3.14159*c*c);

    return 0;
}
