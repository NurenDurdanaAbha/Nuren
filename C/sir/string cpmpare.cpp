#include<stdio.h>
#include<string.h>
int main()
{
    char a[100],b[100];
    int value;
    gets (a);
    gets (b);
    value=strcmp(a,b);
    printf("value = %d",value);
    return 0;
}
