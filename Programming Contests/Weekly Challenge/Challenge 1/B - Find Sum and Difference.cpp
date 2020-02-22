#include<stdio.h>

int main()
{
    int a,b,summ,diff;
    float x,y,sum,dif;

    scanf("%d%d",&a,&b);
    scanf("%f%f",&x,&y);


    summ = a+b;
    diff = a - b;

    sum = x + y;
    dif = x - y;


    printf("%d %d\n",summ,diff);
    printf("%.1f %.1f\n",sum,dif);



    return 0;
}
