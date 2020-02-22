#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
     if(b<a && a>c && c<b)
        printf("%d\n%d\n%d\n\n",c,b,a);
     if(b<c && c>a && a<b)
        printf("%d\n%d\n%d\n\n",a,b,c);
     if (c<b && b>a && a<c)
        printf("%d\n%d\n%d\n\n",a,c,b);
        if (a<c && c>b  && b<a)
        printf("%d\n%d\n%d\n\n",b,a,c);
       if (c<a && a>b  && b<c)
       printf("%d\n%d\n%d\n\n",b,c,a);
       if (a<b && b>c && c<a)
       printf("%d\n%d\n%d\n\n",c,a,b);


    printf("%d\n%d\n%d\n",a,b,c);
    return 0;
}
