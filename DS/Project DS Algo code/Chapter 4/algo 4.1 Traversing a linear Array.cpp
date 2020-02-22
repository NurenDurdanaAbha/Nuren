#include<stdio.h>

int main()
{
    int K,LB,UB,LA[100];

    scanf("%d%d",&LB,&UB);

    K=LB;
    while(K<=UB)
    {
        scanf("%d",&LA[K]);
        K++;
    }


    K=LB;
    while(K<=UB)
    {
        printf("%d ",LA[K]);
        K++;
    }

    return 0;
}
