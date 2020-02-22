#include<stdio.h>

int main()
{
    char ch,s1[200],s2[100];

    scanf("%c\n",&ch);
   // getchar();
    scanf("%s\n",s1);
   // getchar();
    scanf("%[^\n]%*c",s2);

    printf("%c\n",ch);
    printf("%s\n",s1);
    printf("%s",s2);
    printf("\n");


    return 0;
}

7
5 3 2 3 1 9 8
9
3 5 5 3 8 8 9 2 1
