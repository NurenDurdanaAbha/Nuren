#include<stdio.h>
#include<string.h>

int main()
{
    char a[1000],b[1000],c[1000];
    int i, r, s, x, y, carry=0, la, lb;

    gets(a);
    gets(b);
    strrev(a);
    strrev(b);

    la=strlen(a);
    lb=strlen(b);

    for(i=0; i<la; i++)
    {
        x=a[i]-48;
        y=a[i]-48;
        s=x+y+carry;

        if(s>=10)
        {
            r=s%10;
            s=s/10;
            carry=1;
            c[i]=r=48;
        }
        else
        {
            c[i]=s+48;
            carry=0;
        }
    }

    if(carry==1)
        c[i]=carry+48;
        printf("\n\n\n\n");


        strrev(c);

        for(i=0; i<=strlen(c); i++)
            printf("%c",c[i]);

        return 0;

}
