#include<stdio.h>
#define ghorar_dm for (i=1; i<=5; i++)

void haty(int a, int b)
{
    int c;
    c=a-b;
    printf("sum: %d\n",c);
}
int main()
{
    int x, y, z, i;
    ghorar_dm
    {
        scanf("%d%d",&x,&y);
        haty(x,y);
    }
    return 0;
}
