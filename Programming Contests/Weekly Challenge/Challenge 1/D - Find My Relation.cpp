#include<stdio.h>

int main()
{
    int a,b,test;

    scanf("%d",&test);
    while(test--)
    {
        scanf("%d%d",&a,&b);

        if(a>b)
            printf(">\n");
        else if(a<b)
            printf("<\n");
        else
            printf("=\n");
    }


    return 0;
}
