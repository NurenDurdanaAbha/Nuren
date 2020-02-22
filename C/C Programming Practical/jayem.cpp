#include<stdio.h>
int main()
{
    float c,f;
    printf("Enter temp in Celsius: ");
    scanf("%f",&c);
    f=(9*c)/5+32;
    printf("Temp in Fahrenheit: %.3f\n\n",f);

    printf("Enter temp in Fahrenheit: ");
    scanf("%f",&f);
    c=(5*f-160)/9;
    printf("Temp in Celsius: %.3f\n",c);
    return 0;
}
