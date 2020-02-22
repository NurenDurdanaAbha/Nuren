#include<stdio.h>

int main()
{
    int a[2][3],b[2][3],s[2][3],r,c;

    for(r=0; r<2; r++)
    {
        for(c=0; c<3; c++)
        {
            scanf("%d",&a[r][c]);
        }
    }
     for(r=0; r<2; r++)
    {
        for(c=0; c<3; c++)
        {
            scanf("%d",&b[r][c]);
        }
    }
     for(r=0; r<2; r++)
     {
         for(c=0; c<3; c++)
         {
         s[r][c]=a[r][c]+b[r][c];
         }
     }

     printf("\n\n");
      for(r=0; r<2; r++)
      {
        for(c=0; c<3; c++)
        {
            printf("%d ",s[r][c]);
        }
        printf("\n");
    }

    return 0;

}
