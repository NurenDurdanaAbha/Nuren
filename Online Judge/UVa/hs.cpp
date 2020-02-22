#include<stdio.h>
#include<string.h>
int main()
{
    char s[1000000];
    int l,i;
    while(gets(s))
    {
        l = strlen(s);

        for(i=0;i<l;i++)
        {

            if(s[i]=='e' || s[i]=='E')
                printf("q");
            else if(s[i]=='r' || s[i]=='R')
                printf("w");
            else if(s[i]=='t' || s[i]=='T')
                printf("e");
            else if(s[i]=='y' || s[i]=='Y')
                printf("r");
            else if(s[i]=='u' || s[i]=='U')
                printf("t");
            else if(s[i]=='i' || s[i]=='I')
                printf("y");
            else if(s[i]=='o' || s[i]=='O')
                printf("u");
            else if(s[i]=='p' || s[i]=='P')
                printf("i");
            else if(s[i]=='[' || s[i]=='{')
                printf("o");
            else if(s[i]==']' || s[i]=='}')
                printf("p");
            else if(s[i]=='\\' || s[i]=='|')
                printf("[");
            else if(s[i]=='d' || s[i]=='D')
                printf("a");
            else if(s[i]=='f' || s[i]=='F')
                printf("s");
            else if(s[i]=='g' || s[i]=='G')
                printf("d");
            else if(s[i]=='h' || s[i]=='H')
                printf("f");
            else if(s[i]=='j' || s[i]=='J')
                printf("g");
            else if(s[i]=='k' || s[i]=='K')
                printf("h");
            else if(s[i]=='l' || s[i]=='L')
                printf("j");
            else if(s[i]==';' || s[i]==':')
                printf("k");
            else if(s[i]=='\'' || s[i]=='"')
                printf("l");
            else if(s[i]=='c' || s[i]=='C')
                printf("z");
            else if(s[i]=='v' || s[i]=='V')
                printf("x");
            else if(s[i]=='b' || s[i]=='B')
                printf("c");
            else if(s[i]=='n' || s[i]=='N')
                printf("v");
            else if(s[i]=='m' || s[i]=='M')
                printf("b");
            else if(s[i]==',' || s[i]=='<')
                printf("n");
            else if(s[i]=='.' || s[i]=='>')
                printf("m");
            else if(s[i]=='/' || s[i]=='?')
                printf(",");
            else if(s[i]=='2' || s[i]=='@')
                printf("`");
            else if(s[i]=='3' || s[i]=='#')
                printf("1");
            else if(s[i]=='4' || s[i]=='$')
                printf("2");
            else if(s[i]=='5' || s[i]=='%')
                printf("3");
            else if(s[i]=='6' || s[i]=='^')
                printf("4");
            else if(s[i]=='7' || s[i]=='&')
                printf("5");
                else if(s[i]=='8' || s[i]=='*')
                printf("6");
                else if(s[i]=='9' || s[i]=='(')
                printf("7");
                else if(s[i]=='0' || s[i]==')')
                printf("8");
                else if(s[i]=='-' || s[i]=='_')
                printf("9");
                else if(s[i]=='=' || s[i]=='+')
                printf("0");
                else if(s[i]==' ')
                printf(" ");

        }
        printf("\n");
    }
    return 0;
}
