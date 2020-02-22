#include<stdio.h>

int main()
{
    int x=10,y=5;

    if(!(x%2!=0) & !(y!=(x/2)))
    {
       printf("%d\n",x>y);
       printf("%d\n",x<y);
       printf("%d\n",x==y);
       printf("%d\n",x!=y);
    }
    else
    {
        printf("Jitbe abar nouka!!!!");
    }



    return 0;
}
