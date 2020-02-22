#include<stdio.h>
#include<string.h>
int main()
{
    char a[100];
    gets (a);
    int length;
    length=strlen (a);
    printf("Number of char:  %d",length);
    return 0;
}
