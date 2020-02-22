#include<stdio.h>
#include<string.h>

int main()
{
    char s[100000];

    while(scanf("%s",&s)!=EOF)
    {
         if(s[0]=='0' && strlen(s)==1)
                    break;

           int b=0;
            for(int i=0; i<strlen(s); i++)
            {
                    b =(b*10+(s[i]-'0'))%11;
            }


        if(b==0)
            printf("%s is a multiple of 11.\n",s);
        else
            printf("%s is not a multiple of 11.\n",s);
    }


    return 0;
}
