#include<stdio.h>
#include<string.h>

int main()
{
    int i;
    char a[10000];

    while(gets(a))
    {
        for(i=0; i<strlen(a); i++)
        {
            a[i] = a[i] - 7;
        }

        puts(a);
    }

    return 0;
}
