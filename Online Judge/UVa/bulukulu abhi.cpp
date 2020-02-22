#include <stdio.h>
#include<string.h>

int main()
{
    int  count = 0,i,b,c,d,e,f;
    char s[100000];

    while(scanf("%s",&s)!=EOF)
    {
        b=0;
        c=0;
        d=0;
        e=0;
        f=0;
        for(i=0; i<strlen(s); i++)
        {
            b =  (b*10+(s[i]-'0'))%4;
            c =  (c*10+(s[i]-'0'))%100;
            d =  (d*10+(s[i]-'0'))%400;
            e =  (e*10+(s[i]-'0'))%15;
            f =  (f*10+(s[i]-'0'))%55;

        }

        if(count > 0)
            printf("\n");

        count++;

        if((b==0 && c!=0) || d==0)
            {
                printf("This is leap year.\n");

            if(e==0)
                   printf("This is huluculu festival year.\n");

                if(f==0)
                    printf("This is bulukulu festival year.\n");
            }

        else
        {
            if(e==0)
                printf("This is huluculu festival year.\n");

            else
                printf("This is an ordinary year.\n");
        }
    }

    return 0;
}
