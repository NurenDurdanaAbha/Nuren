#include<stdio.h>
void nuren(int a, int b)
{
    int c;
    c=a+b;
    printf("%d",c);
}
int main()
{
    int i,n,x,y;
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        scanf("%d%d",&x,&y);
        nuren(x,y);
    }
    return 0;
}
