//Write a  program that implements the operations of stack.....

#include<stdio.h>
int s[1000], top=-1;

void push (int x)
{
    s[++top]=x;
}

int topp()
{
    return s[top];
}

void popp()
{
    top--;
}

int main()
{
    int i,n,x;

    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        scanf("%d",&x);
        push(x);
    }

    for(i=0; i<n; i++)
    {
        printf("%d ",topp());
        popp();
    }

    return 0;
}
