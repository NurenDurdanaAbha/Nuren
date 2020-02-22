#include<stdio.h>
#include<string.h>
#include<math.h>

int main()
{
    char s[1000];
    int x,i,j,flag;

    while(scanf("%s",s)!=EOF)
    {
       x=0;

       for(i=0; i<strlen(s); i++)
       {
           if(s[i]=='a')
                x = x + 1;
            else if(s[i]=='b')
                x = x + 2;
            else if(s[i]=='c')
                x = x + 3;
            else if(s[i]=='d')
                x = x + 4;
            else if(s[i]=='e')
                x = x + 5;
            else if(s[i]=='f')
                x = x + 6;
            else if(s[i]=='g')
                x = x + 7;
            else if(s[i]=='h')
                x = x + 8;
                else if(s[i]=='i')
                x = x + 9;
                else if(s[i]=='j')
                x = x + 10;
                else if(s[i]=='k')
                x = x + 11;
                else if(s[i]=='l')
                x = x + 12;
                else if(s[i]=='m')
                x = x + 13;
                else if(s[i]=='n')
                x = x + 14;
                else if(s[i]=='o')
                x = x + 15;
                else if(s[i]=='p')
                x = x + 16;
                else if(s[i]=='q')
                x = x + 17;
                else if(s[i]=='r')
                x = x + 18;
                else if(s[i]=='s')
                x = x + 19;
                else if(s[i]=='t')
                x = x + 20;
                else if(s[i]=='u')
                x = x + 21;
                else if(s[i]=='v')
                x = x + 22;
                else if(s[i]=='w')
                x = x + 23;
                else if(s[i]=='x')
                x = x + 24;
                else if(s[i]=='y')
                x = x + 25;
                else if(s[i]=='z')
                x = x + 26;
                else if(s[i]=='A')
                x = x + 27;
                else if(s[i]=='B')
                x = x + 28;
                else if(s[i]=='C')
                x = x + 29;
                else if(s[i]=='D')
                x = x + 30;
                else if(s[i]=='E')
                x = x + 31;
                else if(s[i]=='F')
                x = x + 32;
                else if(s[i]=='G')
                x = x + 33;
                else if(s[i]=='H')
                x = x + 34;
                else if(s[i]=='I')
                x = x + 35;
                else if(s[i]=='J')
                x = x + 36;
                else if(s[i]=='K')
                x = x + 37;
                else if(s[i]=='L')
                x = x + 38;
                else if(s[i]=='M')
                x = x + 39;
                else if(s[i]=='N')
                x = x + 40;
                else if(s[i]=='O')
                x = x + 41;
                else if(s[i]=='P')
                x = x + 42;
                else if(s[i]=='Q')
                x = x + 43;
                else if(s[i]=='R')
                x = x + 44;
                else if(s[i]=='S')
                x = x + 45;
                else if(s[i]=='T')
                x = x + 46;
                else if(s[i]=='U')
                x = x + 47;
                else if(s[i]=='V')
                x = x + 48;
                else if(s[i]=='W')
                x = x + 49;
                else if(s[i]=='X')
                x = x + 50;
                else if(s[i]=='Y')
                x = x + 51;
                else if(s[i]=='Z')
                x = x + 52;
       }
       flag = 1;

    for(j=2; j<=sqrt(x); j++)
    {
       if(x%j==0)
      {
        flag=2;
      }
    }

    if(flag==1)
        printf("It is a prime word.\n");
    else
        printf("It is not a prime word.\n");

    }
    return 0;
}
