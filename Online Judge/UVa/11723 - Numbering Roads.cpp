#include<stdio.h>

int main()
{
    int r,n,p,count=1;

    while(scanf("%d%d",&r,&n)!=EOF)
    {
        if(r==0 && n==0)
            break;

        p = r - n;

        if(p%n!=0)
            printf("Case %d: %d\n",count++,p/n + 1);
        else if(p > 26)
            printf("impossible\n");
    }


    return 0;
}
