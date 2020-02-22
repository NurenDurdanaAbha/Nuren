#include<stdio.h>
#include<conio.h>
int main()
{
    int i=1,j;
    while(i<=10)
    {
        for(j=1; j<=10; j++)
        {
            printf("7 ");
             if(j==7)
                goto stop;
        }
        i=i+1;
    }
    stop:
        printf("\n\nExcited!");
        getch();
}
