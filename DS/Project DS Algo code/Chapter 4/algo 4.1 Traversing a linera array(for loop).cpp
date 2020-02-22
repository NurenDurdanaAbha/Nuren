#include<stdio.h>

int main()
{
    int K,LB,UB,LA[100];

    scanf("%d%d",&LB,&UB);

    for(K=LB; K<=UB; K++)
    {
        scanf("%d",&LA[K]);
    }


    for(K=LB; K<=UB; K++)
    {
        printf("%d ",LA[K]);
    }



    return 0;
}
