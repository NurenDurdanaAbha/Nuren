#include<stdio.h>

int main()
{
    char name[30];
    double sa,se;
    scanf("%s",&name);
    scanf("%lf%lf",&sa,&se);
    printf("TOTAL =  R$ %.2lf\n",(sa+(se*15)/100));
    return 0;
}

