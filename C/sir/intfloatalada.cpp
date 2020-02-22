#include<stdio.h>

int main()
{
    float a,c;
    int b;

    scanf("%f",&a);

    b= int(a);
    c=a-b;

    printf("%d\n",b);
   printf("%.2f\n",c);

   return 0;
}
