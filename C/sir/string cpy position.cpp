#include<stdio.h>
#include<string.h>
int main()
{
    char a[200],b[200];
    gets (a);
    strcpy(b,&a[8]);
    puts (b);
    return 0;
}
