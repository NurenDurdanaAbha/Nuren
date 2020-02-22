#include<stdio.h>

int main()
{
    int n,a,b,f;

    while(scanf("%d",&n)!=EOF)
    {
        if(n==0)
            break;

            f=1;
        for(a=1; a<58; a++)
        {
            for(b=1; b<57; b++)
            {
                if(n == ((a*a*a)-(b*b*b)))
                {
                    printf("%d %d\n",a,b);
                   f=2;
                }
             if(f==2)
                   break;
            }
            if(f==2)
                break;
        }

        if(f==1)
            printf("No solution\n");

    }

    return 0;
}
