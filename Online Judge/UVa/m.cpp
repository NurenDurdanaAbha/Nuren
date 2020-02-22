#include<stdio.h>
#include<string.h>
int main()
{
    char n[1000000];
    while(scanf("%s",n)!=EOF)
    {
        if(n[0]==0 && n[1]!='\0')
            break;

        int i,l;
        int x=0;
        l = strlen(n);
        for(i=0;i<l;i++)
        {
            x = (x*10+(n[i]-'0'))%11;
        }
            if(x==0)
                printf("%s is a multiple of 11.\n",n);
            else
                printf("%s is not a multiple of 11.\n",n);

    }
    return 0;
}
