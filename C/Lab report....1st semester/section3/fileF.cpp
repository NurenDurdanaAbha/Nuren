#include<stdio.h>

int main()
{
    FILE *fp;

    fp = fopen("INVENTORY.txt","r");

    char ch;
    while(fscanf(fp,"%c",&ch)!=EOF)
    {
        printf("%c",ch);
    }

    printf("\n");
    return 0;
}
