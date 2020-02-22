#include <stdio.h>
#include <string.h>

int main()
{
    char a[1000], b[1000], c[1000];
    int i, r, s, x, y, d = 0;
    int la, lb;

    gets(a);
    gets(b);

    printf("\n");

    strrev(a);
    strrev(b);

    la = strlen(a);
    lb = strlen(b);

    for(i = 0; i < la; i++)
    {
        x = a[i] - 48;
        y = b[i] - 48;

        s = x + y + d;

        printf("at first ......... x = %d, y = %d, d = %d\n", x, y, d);

        if(s >= 10)
        {
            r = s % 10;
            s = s / 10;
            d = 1;

            c[i] = r + 48;

            printf("if ......... x = %d, y = %d, d = %d\n", x, y, d);
        }

        else
        {
            c[i] = s + 48;

            d = 0;

            printf("else ......... x = %d, y = %d, d = %d\n", x, y, d);
        }
    }

    if(d == 1)
        c[i] = d + 48;

    printf("\n");

    puts(c);

    strrev(c);

    for(i = 0; i < strlen(c); i++)
        printf("%c", c[i]);

    return 0;
}
