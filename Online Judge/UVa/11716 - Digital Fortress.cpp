#include<stdio.h>
#include<string.h>
#include<math.h>

int main()
{
    int i,j,k=1,t,l,p;
    char s[1000000],ch;

    scanf("%d%c",&t,&ch);
    while(k<=t)
    {
    gets(s);

    l = strlen(s);
    p = sqrt(l);

    if(p*p == l)
    {
      for(i=0; i<p; i++)
    {
       for(j=i; j<l; j+=p)
        {
            printf("%c",s[j]);
        }
    }
    printf("\n");
    }

    else
        printf("INVALID\n");

        k++;
    }


    return 0;
}
