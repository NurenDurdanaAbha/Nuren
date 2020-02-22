#include<stdio.h>

struct form
{
    int roll,totalMARKS;
};
int main()
{
    form s[10000],bs;
    int i,j;

    for(i=1; i<=4; i++)
    {
        printf("Enter the roll of the student %d:  ",i);
        scanf("%d",&s[i].roll);

        printf("Enter the totalMARKS  of the student %d:  ",i);
        scanf("%d",&s[i].totalMARKS);
    }
     for(i=1; i<=4; i++)
     {
          for(j=1; j<=4-i; j++)
          {
              if(s[j].totalMARKS < s[j+1].totalMARKS)
              {
                  bs=s[j];
                  s[j]=s[j+1];
                  s[j+1]=bs;
              }
          }
     }

     printf("\n\n\t\t.............RESULT.............\n\n");

    for(i=1; i<=4; i++)
    {
    printf("Roll = %d\n",s[i].roll);
    }


    return 0;
}
