#include <stdio.h>
int main()
{
    int i, s, r, k=0;
    printf("r : ");
    scanf("%d",&r);
    for(i=1; i<=r; ++i, k=0)
    {
        for(s=1; s<=r-i; s++)
        {
            printf("  ");
        }
        while(k != 2*i-1)
        {
            printf("* ");
            k++;
        }
        printf("\n");
    }
    return 0;
}
