#include<stdio.h>

int main()
{
    FILE *f1;
    char ch, a[1000];

    f1 = fopen("fileDINPUT.txt","w");

    gets(a);
    fprintf(f1,"%s",a);

    fclose(f1);

    f1 = fopen("fileDINPUT.txt","r");
    while(fscanf(f1,"%c",&ch)!=EOF)
    {
        printf("%c",ch);
    }

    fclose(f1);

    return 0;
}
