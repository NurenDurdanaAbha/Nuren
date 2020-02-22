#include<stdio.h>
#include<string.h>
int main()
{
    char a[100];
    gets (a);
    int i, length=0;
    for(i=0; a[i]!='\0';i++)
    {
        length++;
    }
    printf("%d",length);
    return 0;
}
