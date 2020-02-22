#include<stdio.h>
#include<string.h>
int main()
{
    char a[100];
    gets (a);
    int i, length=0;
    length=strlen(a);
    for(i=length-1; i>=0; i--)
    {
      printf("%c",a[i]);
    }
    return 0;
}
