//Write a C program to print n numbers as follows...
//1
//01
//101
//0101

#include<stdio.h>
int main()
{
    int i,j;
    for(i=1;i<=4;i++)
    {
        for(j=1;j<=i;j++)
        {
            if((i+j)%2==0)
                printf("1");
            else
                printf("0");
        }
        printf("\n");
    }
    return 0;
}
