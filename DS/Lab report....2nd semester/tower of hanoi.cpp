#include<stdio.h>

void  tower(int n, char beg, char aux, char end)
{
    if(n==1)
    {
        printf("%c --> %c\n",beg,end);
        return;
    }

    tower(n-1, beg, end, aux);
        printf("%c --> %c\n",beg,end);

    tower(n-1, aux, beg, end);

    return;
}

int main()
{
    int n;
    char beg = 'A', aux = 'B', end = 'C';

    scanf("%d",&n);

    tower(n, beg, aux, end);

    return 0;
}
