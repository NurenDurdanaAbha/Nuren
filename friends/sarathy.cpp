#include <stdio.h>
int main()
{
int r, c, s;
int n=10;
for(r=1; r<=n; r++)
{
    for(s=1; s<=(n-r); s++)
    {
        printf("  ");
    }
    for(c=1; c<=(2*r)-1; c++)
        {
            printf("*  ");
        }
        printf("\n");
 }
    return 0;
}

