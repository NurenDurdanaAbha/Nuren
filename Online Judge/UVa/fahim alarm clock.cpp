#include<stdio.h>
int main()
{
    int a,b,c,d;
    while(scanf("%d%d%d%d",&a,&b,&c,&d)==4)
    {
        if(a==0 && b==0 && c==0 && d==0)
            break;

        if(b==d && c>a)
            printf("%d\n",(c-a)*60);
        if(b==d && c<a)
            printf("%d\n",((24-a)+c)*60);
        if(a==c && b>d)
            printf("%d\n",((23*60)+((60-b)+d)));
        if(a==c && b<d)
            printf("%d\n",(d-b));
        if(a==23 && c==0 && b>d)
            printf("%d\n",(60-b)+d);
        if(a==23 && c==0 && b<d)
            printf("%d\n",(60-b)+d);
        if(a>c && b>d)
            printf("%d\n",((a-c)*60)+(b-d));
        if(a>c && b<d)
            printf("%d\n",(((24-a)+c)*60)+((60-b)+d));
        if(a==b && b==d)
            printf("0\n");

    }
    return 0;
}
