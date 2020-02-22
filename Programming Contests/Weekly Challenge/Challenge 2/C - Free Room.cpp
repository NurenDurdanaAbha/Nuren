#include<stdio.h>

int main()
{
    int test,p,q,count=0;

    scanf("%d",&test);
    while(test--)
    {
        scanf("%d%d",&p,&q);

        if(p<q-1)
            count++;
    }
    printf("%d\n",count);

    return 0;
}
