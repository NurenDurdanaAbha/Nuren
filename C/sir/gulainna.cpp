#include<stdio.h>
#include<string.h>
int main()
{
    char a[1000];
    gets(a);
    int length,i;
    length =strlen(a);
    for(i=0;i<length;i++)
    puts(a);
    return 0;

}
