#include<stdio.h>

int main()
{
    long int i, n, x,a[1000];

    scanf("%ld", &n);
    for(i = 1; i<=n; i++)
    {
        scanf("%d", &x);
        a[x] = a[x] + 1;
    }

    for(i = 1; i<=n; i++)
    {
        printf("%ld %ld\n", i, a[i]);
    }

    return 0;
}
