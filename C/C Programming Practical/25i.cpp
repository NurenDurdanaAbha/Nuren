#include<stdio.h>

int main()
{
    int r,c,s;

   for(r=1; r<=4; r++)
   {
       for(s=1; s<=4-r; s++)
      {
          printf(" ");
      }
          for(c=1; c<=(2*r)-1 ; c++)
          {
              printf("%d",r);
          }
          printf("\n");
      }

   return 0;
}
