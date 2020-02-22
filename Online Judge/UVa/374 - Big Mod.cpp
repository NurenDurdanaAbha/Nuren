#include<stdio.h>
#include<math.h>
#include<string.h>

int main()
{
    int r,b,p,m,i;
    char s[100000];

    while(scanf("%d%d%d",&b,&p,&m)!=EOF)
    {
        r=0;
        s= pow(b,p);

        for(i=0; i<strlen(s); i++)
            r = (r*10 + (s[i] - '0'))%m;      //b =  (b*10+(s[i]-'0'))%4;


        printf("%d\n",r);
    }

    return 0;
}
