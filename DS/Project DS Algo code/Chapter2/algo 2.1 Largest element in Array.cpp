#include<stdio.h>

int main()
{
    int K=1, LOC=1, max,N, DATA[10000];

    scanf("%d",&N);
    for(int i=0; i<N; i++)
        scanf("%d",&DATA[i]);

    max=DATA[1];

    step2:
    K=K+1;

    if(K>N)
    {
        printf("Location: %d\nMAX: %d\n",LOC,max);
        return 0;
    }

    else if(max < DATA[K])
    {
        LOC=K;
        max=DATA[K];
    }

    goto step2;



    return 0;
}
