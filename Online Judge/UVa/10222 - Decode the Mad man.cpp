#include<stdio.h>

int main()
{
    char ch;

    while(scanf("%c",&ch)!=EOF)
    {
        if(ch=='2' || ch=='@')
            printf("`");
        else if(ch=='3' || ch=='#')
            printf("1");
        else if(ch=='4' || ch=='$')
            printf("2");
        else if(ch=='5' || ch=='%')
            printf("3");
        else if(ch=='6' || ch=='^')
            printf("4");
        else if(ch=='7' || ch=='&')
            printf("5");
        else if(ch=='8' || ch=='*')
            printf("6");
        else if(ch=='9' || ch=='(')
            printf("7");
        else if(ch=='0' || ch==')')
            printf("8");
        else if(ch=='-' || ch=='_')
            printf("9");
        else if(ch=='=' || ch=='+')
            printf("0");
        else if(ch=='E' || ch=='e')
            printf("q");
        else if(ch=='R' || ch=='r')
            printf("w");
        else if(ch=='T' || ch=='t')
            printf("e");
        else if(ch=='Y' || ch=='y')
            printf("r");
        else if(ch=='U' || ch=='u')
            printf("t");
        else if(ch=='I' || ch=='i')
            printf("y");
        else if(ch=='O' || ch=='o' )
            printf("u");
        else if(ch=='P' || ch=='p')
            printf("i");
        else if(ch=='[' || ch=='{')
            printf("o");
        else if(ch==']' || ch=='}')
            printf("p");
        else if(ch=='\\' || ch=='|')
            printf("[");
        else if(ch=='D' || ch=='d')
            printf("a");
        else if(ch=='F' || ch=='f')
            printf("s");
        else if(ch=='G' || ch=='g')
            printf("d");
        else if(ch=='H' || ch=='h')
            printf("f");
        else if(ch=='J' || ch=='j')
            printf("g");
        else if(ch=='K' || ch=='k')
            printf("h");
        else if(ch=='L' || ch=='l')
            printf("j");
        else if(ch==';' || ch==':')
            printf("k");
        else if(ch=='\'' || ch=='"')
            printf("l");
        else if(ch=='C' || ch=='c')
            printf("z");
        else if(ch=='V' || ch=='v')
            printf("x");
        else if(ch=='B' || ch=='b')
            printf("c");
        else if(ch=='N' || ch=='n')
            printf("v");
        else if(ch=='M' || ch=='m')
            printf("b");
        else if(ch==',' || ch=='<')
            printf("n");
        else if(ch=='.' || ch=='>')
            printf("m");
        else if(ch=='/' || ch=='?')
            printf(",");
        else if(ch==' ')
            printf(" ");
        else if(ch=='\n')
            printf("\n");
    }


    return 0;
}
