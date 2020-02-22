#include<stdio.h>

struct form
{
    int roll;
    float gpa;
};
int main()
{
    form nuren, durdana, abha;

    scanf("%d%d%d",&nuren.roll,&durdana.roll,&abha.roll);
    scanf("%f%f%f",&nuren.gpa,&durdana.gpa,&abha.gpa);

    printf("%d\n%d\n%d\n",nuren.roll,durdana.roll,abha.roll);
    printf("%f\n%f\n%f\n",nuren.gpa,durdana.gpa,abha.gpa);

    return 0;
}
