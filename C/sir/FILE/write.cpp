#include<stdio.h>

int main()
{
    FILE *fp;

    fp=fopen("Myfile.txt","w");
    fprintf(fp,"Welcome to Bangladesh");
    fclose(fp);

    return 0;
}
