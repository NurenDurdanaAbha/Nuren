#include<stdio.h>
int main()
{
    float c,f;

    printf("\t\t\tCelsius to Fahrenheit\n");
    printf("Input the temperature in Celsius: ");
    scanf("%f",&c);
    printf("The temperature in fahrenheit: %.2f\n\n\n",((9*c)/5)+32);

     printf("\t\t\tFahrenheit to Celsius\n");
    printf("Input the temperature in Fahrenheit: ");
    scanf("%f",&f);
    printf("The temperature in celsius: %.2f\n\n",5*((f-32)/9));

    return 0;
}
