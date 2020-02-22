
#include<stdio.h>
int main()
{
    int n,d,a,max;

    scanf("%d%d%d",&n,&d,&a);

    max=n;
    if(max<d)
        printf("d= %d is MAXIMUM",d);
    if(max<a)
        printf("a= %d is MAXIMUM",a);
    else
        printf("n= %d is MAXIMUM",n);

    return 0;
}
