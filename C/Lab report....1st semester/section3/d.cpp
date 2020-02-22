#include<stdio.h>
int main()
{
    FILE *f1;
    f1 = fopen("INPUT..txt","r");
  //  f2 = fopen("OUTPUT..txt","a");
    char ch;
    while(fscanf(f1,"%c",&ch)!=EOF)
        printf("%c",ch);
    fclose(f1);
    //fclose(f2);
    return 0;
}
