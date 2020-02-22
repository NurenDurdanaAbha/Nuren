#include<stdio.h>

int main()
{
    int n, t=1,count,s;

    while(scanf("%d",&n)!=EOF)
    {
        if(n<0)
            break;
            count=0;
            s=1;
            while(s<n)
            {
                s = s+s;
                count++;
            }

        printf("Case %d: %d\n",t++,count);

    }

    return 0;
}
