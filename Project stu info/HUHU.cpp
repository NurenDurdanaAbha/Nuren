#include<stdio.h>
#include<string.h>

void DELETE(char T[], int K, int R)
{
    int j=0,S,i;
    char T1[100000],T2[100000];

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
    char T[100000],P[100000];
    int K,l,j,i,I1,I2,I;

    while(gets(T))
    {


    l=strlen(T);

    j=0;
    for(i=0; i<l; i++)
    {
        if(T[i]=='[' && j<1)
        {
            I1=i;
            K=i+1;
            j++;
        }


        if(T[i]==']')
        {
            I2=i;
        }
        else
            I2=0;
    }

    if(I2==0)
        I=1;
    else
        I=I2-I1+1;



    //while(I!=0 && K!=0)
    DELETE(T,K,I);

    puts(T);
    }

    return 0;
}
