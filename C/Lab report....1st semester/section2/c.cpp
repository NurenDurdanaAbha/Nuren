#include<stdio.h>
#include<string.h>

int main()
{
    char a[100],b[100];

    gets(a);
    strcpy(b,a);
    strrev(b);

    if(strcmp(a,b)==0)
        printf("PALINDROME");
    else
        printf("Not PALINDROME");

    return 0;

}
