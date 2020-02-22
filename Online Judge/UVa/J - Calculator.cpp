#include<stdio.h>

int main()
{
    char s[10000];
    int i,word;

    for(i=0; i<=strlen(s); i++)
    {
        word = (word*10+(s[i]-'0'))%2;
    }



    return 0;
}
