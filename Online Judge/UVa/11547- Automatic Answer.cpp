#include<stdio.h>

int main()
{
    int n,t,i;

    scanf("%d",&t);
    for(i=1; i<=t; i++)
    {
        scanf("%d",&n);

        n = ((((((n * 567)/9)+7492)* 235)/47) - 498);

        if(n<0)
            n = n * (-1);

        printf("%d\n",(n/10)%10);
    }


    return 0;
}
