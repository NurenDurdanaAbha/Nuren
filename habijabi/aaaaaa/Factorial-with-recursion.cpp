#include<stdio.h>
int factorial(int Fact,int n)
{
    if(n==0)
        return Fact;
    else
        return factorial(Fact*n,n-1);
}

int main()
{
    int n,Fact = 1;
    printf("Enter the Number: ");
    scanf("%d",&n);
    printf("%d",factorial(Fact,n));

    return 0;
}
