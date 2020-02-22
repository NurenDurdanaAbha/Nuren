#include<stdio.h>
#include<string.h>

int main()
{
    char s[10000],c;
    int count,test,t=1;

    scanf("%d%c",&test,&c);
    while(test--)
    {
        gets(s);
        int i=0;
        count=0;

        while(i<strlen(s))
        {
            if(s[i]=='a' || s[i]=='d' || s[i]=='g' || s[i]=='j' || s[i]=='m' || s[i]=='p' || s[i]=='t' || s[i]=='w' || s[i]=='\n' || s[i]==' ')
                count++;
            else if(s[i]=='b' || s[i]=='e' || s[i]=='h' || s[i]=='k' || s[i]=='n' || s[i]=='q' || s[i]=='u' || s[i]=='x')
                count+=2;
            else if(s[i]=='c' || s[i]=='f' || s[i]=='i' || s[i]=='l' || s[i]=='o' || s[i]=='r' || s[i]=='v' || s[i]=='y')
                count+=3;
            else if(s[i]=='s' || s[i]=='z')
                count+=4;

            i++;
        }

            printf("Case #%d: %d\n",t++,count);
    }

    return 0;
}
