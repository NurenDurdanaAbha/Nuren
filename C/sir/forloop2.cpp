#include <stdio.h>
int main()
{
char print='x';
int row, col;
int noofRows=5;

for(row=1; row<=noofRows; row++)
{
    printf("\n");

    for(col=1; col<=row; col++)
        {
            printf("%c", print);

        }

 }
    return 0;
}
