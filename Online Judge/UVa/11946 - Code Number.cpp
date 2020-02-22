#include<stdio.h>
#include<string.h>

int main()
{
    char s[100000];
    int test,i,length;

   scanf("%d\n",&test);

    while(test--)
    {
    while(gets(s))
    {
            length=strlen(s);


        for(i=0; i<length; i++)
        {
            if(s[i]=='4')
                printf("A");
            else if(s[i]=='8')
                printf("B");
            else if(s[i]=='C')
                printf("C");
            else if(s[i]=='D')
                printf("D");
            else if(s[i]=='3')
                printf("E");
            else if(s[i]=='F')
                printf("F");
            else if(s[i]=='6')
                printf("G");
            else if(s[i]=='H')
                printf("H");
            else if(s[i]=='1')
                printf("I");
            else if(s[i]=='J')
                printf("J");
            else if(s[i]=='K')
                printf("K");
            else if(s[i]=='L')
                printf("L");
            else if(s[i]=='M')
                printf("M");
            else if(s[i]=='N')
                printf("N");
            else if(s[i]=='0')
                printf("O");
            else if(s[i]=='9')
                printf("P");
            else if(s[i]=='Q')
                printf("Q");
            else if(s[i]=='R')
                printf("R");
            else if(s[i]=='5')
                printf("S");
            else if(s[i]=='7')
                printf("T");
            else if(s[i]=='U')
                printf("U");
            else if(s[i]=='V')
                printf("V");
            else if(s[i]=='W')
                printf("W");
            else if(s[i]=='X')
                printf("X");
            else if(s[i]=='Y')
                printf("Y");
            else if(s[i]=='2')
                printf("Z");
            else if(s[i]==' ')
                printf(" ");
            else if(s[i]=='.')
                printf(".");
            else if(s[i]==',')
                printf(",");
            else if(s[i]=='\n')
                printf("\n");
        }
        printf("\n");
    }
    }


    return 0;
}

