#include<stdio.h>
void f(int n)
{
   int i,f=1;
   for(i=1; i<=n; i++)
   {
       f=f*i;
   }
   printf("%d",f);
}

int main()
{
    int n,r;
    scanf("%d",&n);
    f(n);
    return 0;
}
