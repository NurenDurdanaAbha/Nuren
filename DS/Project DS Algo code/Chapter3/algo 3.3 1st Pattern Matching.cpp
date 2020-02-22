#include<stdio.h>
#include<string.h>

int main()
{
    int K=1,max,INDEX,S,R;
    char T[10000],P[10000];


    gets(T);
    gets(P);

    S=strlen(T);
    R=strlen(P);

    max=S-R+ 1;

    while(K<=max)
    {
        for(int L=0; L<R; L++)
        {
            if(P[L]!=T[K+L-1])
                goto step;
        }

         INDEX=K;
         printf("%d\n",INDEX);
        return 0;

        step:
            K=K+1;
    }

   INDEX=0;


    printf("%d\n",INDEX);

    return 0;
}
