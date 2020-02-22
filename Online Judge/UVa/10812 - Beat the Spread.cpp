#include<stdio.h>

int main()
{
    int s,d,t,i;
    float x,y;

    scanf("%d",&t);
    for(i=1; i<=t; i++)
    {
        scanf("%d%d",&s,&d);

        if((s+d)%2!=0 || (s-d)%2!=0 || s<d)
            printf("impossible\n");

        else
        {
        printf("%d %d\n",(s+d)/2,(s-d)/2);
        }
    }



    return 0;
}
