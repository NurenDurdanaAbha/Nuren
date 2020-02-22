#include<stdio.h>
#include<string.h>
int main()
{
    char s[14];
    int i=1,len;

    while(1)
    {
        gets(s);

        if(s[0]=='#')
            break;

        else
        {
            len=strlen(s);
            if(len==4)
            {
                if(s[0]=='H')
                printf("Case %d : SPANISH\n",i);
                else
                printf("Case %d : ITALIAN\n",i);
            }
            else if(len==5)
            {
                if(s[1]=='E')
                printf("Case %d : ENGLISH\n",i);
                else
                printf("Case %d : GARMAN\n",i);
            }
            else if(len==7)
            printf("Case %d : FRENCH\n",i);
            else
            printf("Case %d : RUSSIAN\n",i);
            i++;
        }

    }
    return 0;
}
