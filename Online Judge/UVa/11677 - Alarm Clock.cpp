#include<stdio.h>

int main()
{
    int h1,h2,m1,m2,a,b;

    while(scanf("%d%d%d%d",&h1,&m1,&h2,&m2)!=EOF)
    {
        if(h1==0 && m1==0 && h2==0 && m2==0)
            break;

        a = h1*60 + m1;
        b = h2*60 + m2;

        if(h1 < h2)
        {
            if(h2==0)
                printf("%d\n",(1440+m2) - a);
            else
                printf("%d\n", b-a);
        }

        else if(h1>h2)
        {
            if(h1==0)
                printf("%d\n",1440 - ((1440+m1)-b));
            else
                printf("%d\n",1440-(a-b));
        }

        else if(h1==h2)
        {
            if(m1 > m2)
                printf("%d\n",1440 - (a-b));
            else
                printf("%d\n",m2 - m1);
        }
    }

    return 0;
}
