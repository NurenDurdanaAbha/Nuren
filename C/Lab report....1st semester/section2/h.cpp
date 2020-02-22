#include<stdio.h>
#include<string.h>

int main()
{
    char a[100],b[100];

    gets(a);
    strcpy(b,a);

    printf("%d\n",strlen(b));

    return 0;
}
