#include<stdio.h>

int main()
{
    char name;
    float basic, hra, da, pf, gross;

    printf("Enter name: ");
    scanf("%c",&name);
    printf("Enter Basic Salary: ");
    scanf("%f",&basic);
    printf("Enter HRA: ");
    scanf("%f",&hra);
    printf("Enter D.A.: ");
    scanf("%f",&da);

    pf=(basic*30)/100;
    gross=basic+da+hra+pf;

    printf("\nName: %s \nBasic: %f \nHRA: %f \nD.A.: %f  \nPF: %f \n***Gross salary:  %f***",name,basic,hra,da,pf,gross);
    return 0;
}
