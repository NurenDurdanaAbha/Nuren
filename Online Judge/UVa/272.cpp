#include <stdio.h>
#include <string.h>

int main()
{
    char a[10000];
    int i, c = 0;

    while(gets(a))
    {
        for(i = 0; i < strlen(a); i++)
        {
            if(a[i] == '"')
            {
                c++;
                if(c % 2 == 1)
                    printf("``");
                else
                     printf("''");
            }

            else
                printf("%c", a[i]);
        }

        printf("\n");
    }

    return 0;
}
