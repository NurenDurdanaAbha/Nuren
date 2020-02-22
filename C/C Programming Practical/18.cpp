#include<stdio.h>
int main()
{
    int n,i,s=1;

    printf("\t\t\tFACTORIAL\n\n");
    printf("Input the number: ");
    scanf("%d",&n);

    for(i=1; i<=n; i++)
    {
        s=s*i;
    }
    printf("Factorial of the number: %d\n\n",s);

    return 0;
}
