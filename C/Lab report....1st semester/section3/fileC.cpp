#include<stdio.h>

int main()
{
    FILE *f1, *f2;

    f1 = fopen("fileCinput.txt","r");
    f2 = fopen("fileCoutput.txt","w");

    char ch;
    while(fscanf(f1,"%c",&ch)!= EOF)
    {
        fprintf(f2,"%c",ch);
    }

    fclose(f1);
    fclose(f2);

    return 0;
}
