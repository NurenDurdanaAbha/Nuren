#include<stdio.h>

int main()
{
    int h,m,a;

    scanf("%d:%d",&h,&m);

    a=h*60+m;

    if(a==0 || a==1)
        printf("%d Minute\n",a);
    else
        printf("%d Minutes\n",a);

    return 0;
}
