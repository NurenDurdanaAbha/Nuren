#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c,d,e,f;
    while (1)
    {
        scanf("%d",&a);
        scanf("%d",&b);
        scanf("%d",&c);
        if(a==0&&b==0&&c==0)
        {
            break;
        }
        else
        {
            d=sqrt((a*a)+(b*b));
            e=sqrt((c*c)-(b*b));
            f=sqrt((c*c)-(a*a));
            if(d==c&&e==a&&f==b)
            {
                printf("right\n");
            }
            else
            {
                printf("wrong\n");
            }
        }
    }
    return 0;
}
