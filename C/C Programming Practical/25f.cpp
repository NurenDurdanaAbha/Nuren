//Write a C program to print n numbers as follows...
//1
//121
//12321
//1234321

#include<stdio.h>
int main()
{
    int i,j,k;
    for(i=1;i<=4;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d",j);
        }
        for(k=i-1;k>=1;k--)
        {
            printf("%d",k);
        }
        printf("\n");
    }
    return 0;
}
