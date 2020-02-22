#include<stdio.h>
#include<math.h>

int main()
{
    int n,nd,firstDigit;

    scanf("%d",&n);
    printf("output: \n\n\n");

    while(n>0)
    {
        printf("%d\n",n);
        nd=floor(log10(n))+1;
        firstDigit= n/pow(10,nd-1);
        n=n-firstDigit*pow(10,nd-1);
    }
    return 0;
}
