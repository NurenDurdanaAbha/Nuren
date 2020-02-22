#include<stdio.h>

int main()
{
    int N,K=1, LOC=1,DATA[1000];

    scanf("%d",&N);
    for(int i=1; i<=N; i++)
        scanf("%d",&DATA[i]);

     int max=DATA[1];

    while(K<=N)
    {
        if(max< DATA[K])
        {
            LOC=K;
            max=DATA[K];
        }

        K=K+1;
    }

    printf("LOCATION: %d MAX: %d\n",LOC,max);


    return 0;
}
