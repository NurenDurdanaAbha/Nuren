#include<stdio.h>

int main()
{
    int r,c,s,p=1,n;

    scanf("%d",&n);
   for(r=1; r<=n; r++)
   {
       for(s=1; s<=n-r; s++)
      {
          printf(" ");
      }
          for(c=1; c<=(2*r)-1 ; c++)
          {
              printf("%d*%d=%d",p,p,p*p);
              break;
          }
          p=((p*10)+1);
          printf("\n");
      }

   return 0;
}
