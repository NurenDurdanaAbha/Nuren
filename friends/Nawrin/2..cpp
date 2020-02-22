#include<stdio.h>

int main()
{
    int a,b,temp;

    scanf("%d%d",&a,&b);

    printf("Before interchange---\n");
    printf("a = %d\nb = %d\n\n",a,b);

    temp=a;
    a=b;
    b=temp;

    printf("After interchange---\n");
    printf("a = %d\nb = %d\n",a,b);


    return 0;
}
