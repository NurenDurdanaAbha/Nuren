#include <stdio.h>

int main()
{
    int a[1000], b[1000], c[1000], i, j, k;
    int p, q, t;

    printf("Enter the number of items of A: ");
    scanf("%d", &p);
    for(i = 0; i < p; i++)
        scanf("%d", &a[i]);

    printf("Enter the number of items of B: ");
    scanf("%d", &q);
    for(j = 0; j < q; j++)
        scanf("%d", &b[j]);

    k = 0;

    for(i = 0; i < p; i++)
        c[k++] = a[i];

    for(j = 0; j < q; j++)
        c[k++] = b[j];

    for(i = 0; i < p + q - 1; i++)
    {
        for(j = 0; j < p + q - i; j++)
        {
            if(c[j] > c[j + 1])
            {
                t = c[j];
                c[j] = c[j + 1];
                c[j + 1] = t;
            }
        }
    }

    printf("Array sort in C: ");

    for(k = 0; k < p + q; k++)
    {
        printf("%d ", c[k]);
    }

    return 0;
}
