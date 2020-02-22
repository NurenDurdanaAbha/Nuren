#include<stdio.h>

int main()
{
    char a[100], b[100], i=0;

    gets(a);

    while(a[i]!='\0')
    {
        b[i] = a[i];

        i++;
    }

    a[i] = '\0';

    printf("%d",i);

    return 0;
}
