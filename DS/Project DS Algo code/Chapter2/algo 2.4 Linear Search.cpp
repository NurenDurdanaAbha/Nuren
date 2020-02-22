#include<stdio.h>

int main()
{
    int K=1, LOC=0,ITEM,N,DATA[1000];

    scanf("%d",&N);
    for(int i=0; i<N; i++)
        scanf("%d",&DATA[i]);

        scanf("%d",&ITEM);

    while(LOC==0 && K<=N)
    {
        if (ITEM == DATA[K])
            LOC=K;

        K=K+1;
    }

    if(LOC==0)
    {
        printf("%d is not in the array DATA\n",ITEM);
    }
    else
    {
        printf("%d is the location of %d\n",LOC,ITEM);
    }

    return 0;
}
