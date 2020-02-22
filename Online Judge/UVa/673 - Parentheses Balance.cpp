#include<stdio.h>
#include<string.h>

int main()
{
    char ch,s[100000];
    int count1=0, count2=0, count3=0, count4=0,test,t,l;

    scanf("%d%c",&test,&ch);
   for(t=1; t<=test; t++)
    {
        gets(s);

        l=strlen(s);

    if(l%2==0)
        printf("YES\n");
    else
        printf("NO\n");

    }

    return 0;
}
