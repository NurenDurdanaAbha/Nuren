#include<stdio.h>

int main()
{
    int test,a,b,sum,t=1;

    scanf("%d",&test);
    while(test--)
    {
        scanf("%d%d",&a,&b);

        sum = a + b;

        printf("Case %d: %d\n",t++,sum);
    }

    return 0;
}
