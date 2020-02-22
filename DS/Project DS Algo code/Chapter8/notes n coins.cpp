#include<stdio.h>
int main()

{
    int i=0,n;
    double Amnt;
    double notes[7]={100.00,50.00,20.00,10.00,5.00,2.00};
    double coins[7]={1.00,0.50,0.25,0.10,0.05,0.01};

    scanf("%lf",&Amnt);

    printf("NOTAS:");

    while(notes[i] != '\0' )
    {
        n=Amnt/notes[i];
        Amnt=Amnt-(n*notes[i]);
        printf("\n %d nota(s) de R$ %0.2lf",n,notes[i]);
        i++;

    }
    i=0;

    printf("\nMOEDAS:");
    while(coins[i] != '\0')
    {
        n=Amnt/coins[i];
        Amnt=Amnt-(n*coins[i]);
        printf("\n %d moeda(s) de R$ %0.2lf",n,coins[i]);
        i++;
    }

    printf("\n");



    return 0;
}
