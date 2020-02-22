#include<stdio.h>
#include<string.h>

int INDEX(char T[], char P[])
{
    int K,max,S,R,L,index;

    S=strlen(T);
    R=strlen(P);

    K=1;
    max=S-R+1;

    while(K<=max)
    {

        for(L=0; L<R; L++)
        {
            if(P[L]!=T[K+L-1])
                goto step5;
        }

        index=K;
        return index;

        step5: K=K+1;

    }

    index=0;
    return index;
}

void DELETE(char T[], int K, int R)
{
    int j=0,S,i;
    char T1[100],T2[100];

    S=strlen(T);

    for(i=0; i<K-1; i++)
    {
        T1[i]=T[i];
    }
    T1[i]='\0';

    for(i=K+R-1; i<S; i++)
    {
        T2[j]=T[i];
        j++;
    }
    T2[j]='\0';

    strcpy(T,T1);
    strcat(T,T2);
}


int main()
{
    char T[100],P[50];
    int K;

    gets(T);
    gets(P);

    K=INDEX(T,P);
    while(K!=0)
    {
        DELETE(T, /*INDEX(T,P)*/K,strlen(P));
        K=INDEX(T,P);
    }

    printf("\nAFTER DELETION......\n");
    puts(T);

    return 0;
}
