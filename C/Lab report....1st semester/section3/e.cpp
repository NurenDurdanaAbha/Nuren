#include<stdio.h>
int main()
{
    FILE *fp;
    fp = fopen("Myfile.txt","a");
    fprintf(fp,"Nuru vlo hoiya ja.... .....");
    fclose(fp);
    return 0;
}
