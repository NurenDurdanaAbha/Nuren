#include<stdio.h>

int main()
{
    FILE *f1, *f2;

    f1 = fopen("fileEinput.txt","r");
    f2 = fopen("fileEoutput.txt","a");

    char ch;
    while(fscanf(f1,"%c",&ch)!= EOF)
    {
        fprintf(f2,"%c",ch);
    }

    fclose(f1);
    fclose(f2);

    return 0;
}
