#include<stdio.h>

int main()
{
    int i=1,n,a,b;

    scanf("%d",&n);

   for(i=1; i<=n; i++)
    {
      scanf("%d%d",&a,&b);

       if(a>b)
        {
        printf("> \n");
        }

     else  if(a<b)
     {
        printf("< \n");
     }

     else if(a==b)
      {
        printf("= \n");
      }
    }

    return 0;
}
