#include<stdio.h>
int main()
{
    int n;

    scanf("%d",&n);

    if(n<0)
        printf("The number is Negative\n\n");
    else if(n>0)
        printf("The number is Positive\n\n");
    else if(n==0)
        printf("Zero\n\n");

    return 0;
}
