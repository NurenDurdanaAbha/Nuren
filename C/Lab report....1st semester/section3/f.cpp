#include<stdio.h>
int main()
{
    FILE *fp, *fq;
    fp = fopen("INVENTORY.txt","r");
    char ch;
    while(fscanf(fp,"%c",&ch)!=EOF)
    {
        printf("%c",ch);
    }
    fclose(fp);
    return 0;
}
