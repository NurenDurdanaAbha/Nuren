#include<stdio.h>
#include<string.h>

int main()
{
    char s[10000],ch;
    int l,i;

    while(gets(s))
    {
        //scanf("%c",&ch);
        strrev(s);

      //  puts(s);

        l = strlen(s);
       // printf("%d\n",l);

        for(i=0; i<l; i++)
        {
            if(s[i] == 'A')
                printf("56");
            else if(s[i]=='B')
                printf("66");
            else if(s[i]=='C')
                printf("76");
            else if(s[i]=='D')
                printf("86");
            else if(s[i]=='E')
                printf("96");
            else if(s[i]=='F')
                printf("07");
            else if(s[i]=='G')
                printf("17");
            else if(s[i]=='H')
                printf("27");
            else if(s[i]=='I')
                printf("37");
            else if(s[i]=='J')
                printf("47");
            else if(s[i]=='K')
                printf("57");
            else if(s[i]=='L')
                printf("67");
            else if(s[i]=='M')
                printf("77");
            else if(s[i]=='N')
                printf("87");
            else if(s[i]=='O')
                printf("97");
            else if(s[i]=='P')
                printf("08");
            else if(s[i]=='Q')
                printf("18");
            else if(s[i]=='R')
                printf("28");
            else if(s[i]=='S')
                printf("38");
            else if(s[i]=='T')
                printf("48");
            else if(s[i]=='U')
                printf("58");
            else if(s[i]=='V')
                printf("68");
            else if(s[i]=='W')
                printf("78");
            else if(s[i]=='X')
                printf("88");
            else if(s[i]=='Y')
                printf("98");
            else if(s[i]=='Z')
                printf("09");


            else if(s[i] == 'a')
                printf("79");
            else if(s[i]=='b')
                printf("89");
            else if(s[i]=='c')
                printf("99");
            else if(s[i]=='d')
                printf("001");
            else if(s[i]=='e')
                printf("101");
            else if(s[i]=='f')
                printf("201");
            else if(s[i]=='g')
                printf("301");
            else if(s[i]=='h')
                printf("401");
            else if(s[i]=='i')
                printf("501");
            else if(s[i]=='j')
                printf("601");
            else if(s[i]=='k')
                printf("701");
            else if(s[i]=='l')
                printf("801");
            else if(s[i]=='m')
                printf("901");
            else if(s[i]=='n')
                printf("011");
            else if(s[i]=='o')
                printf("111");
            else if(s[i]=='p')
                printf("211");
            else if(s[i]=='q')
                printf("311");
            else if(s[i]=='r')
                printf("411");
            else if(s[i]=='s')
                printf("511");
            else if(s[i]=='t')
                printf("611");
            else if(s[i]=='u')
                printf("711");
            else if(s[i]=='v')
                printf("811");
            else if(s[i]=='w')
                printf("911");
            else if(s[i]=='x')
                printf("021");
            else if(s[i]=='y')
                printf("121");
            else if(s[i]=='z')
                printf("221");

             else if(s[i]==' ')
                printf("23");
             else if(s[i]=='!')
                printf("33");
              else if(s[i]==',')
                printf("44");
             else if(s[i]==':')
                printf("64");
            else if(s[i]==';')
                printf("95");
            else if(s[i]=='?')
                printf("36");
            else if(s[i]=='\n')
                printf("\n");


           else if(s[0] == '6' || s[1]=='5')
                printf("A");

    }
    printf("\n");
    }

    return 0;
}
