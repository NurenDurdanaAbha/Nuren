#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i,j,n,test,t,k;

    scanf("%d",&test);
    for(t=1; t<=test; t++)
    {
        scanf("%d",&n);

      //  printf("Case #%d:",t);
        printf("\n");

        for(i=1; i<=9; i++)
        {
                if(i==1)
                {
                    for(k=1; k<=50; k++)
                        printf(" ");

                    for(k=1; k<=2*n; k++)
                    printf(" ");

                    for(k=1; k<=1*n; k++)
                    printf("*");

                    for(k=1; k<=3*n; k++)
                    printf(" ");

                    for(k=1; k<=1*n; k++)
                    printf("*");

                    for(k=1; k<=2*n; k++)
                    printf(" ");

                   // break;
                   printf("\n");
                }
                else if(i==2)
                {
                    for(j=1; j<=n; j++)
                    {
                        for(k=1; k<=50; k++)
                        printf(" ");

                    for(k=1; k<=n*1; k++)
                    printf(" ");

                    for(k=1; k<=n*1; k++)
                    printf("*");

                    for(k=1; k<=n*1; k++)
                    printf(" ");

                    for(k=1; k<=n*1; k++)
                    printf("*");

                    for(k=1; k<=n*1; k++)
                    printf(" ");

                    for(k=1; k<=n*1; k++)
                    printf("*");

                    for(k=1; k<=n*1; k++)
                    printf(" ");

                    for(k=1; k<=n*1; k++)
                    printf("*");

                    for(k=1; k<=n*1; k++)
                    printf(" ");


                   printf("\n");
                    }

                }

                else if(i==3)
                {
                    for(j=1; j<=n; j++)
                    {
                        for(k=1; k<=50; k++)
                        printf(" ");

                    for(k=1; k<=n*1; k++)
                    printf("*");

                    for(k=1; k<=n*3; k++)
                    printf(" ");

                    for(k=1; k<=n*1; k++)
                    printf("*");

                    for(k=1; k<=n*3; k++)
                    printf(" ");

                    for(k=1; k<=n*1; k++)
                    printf("*");

                    printf("\n");
                    }
                }

                else if(i==4)
                {
                    for(j=1; j<=n; j++)
                    {
                        for(k=1; k<=50; k++)
                        printf(" ");

                       for(k=1; k<=n*1; k++)
                        printf("*");

                        for(k=1; k<=n*7; k++)
                            printf(" ");

                        for(k=1; k<=n*1; k++)
                        printf("*");

                        printf("\n");
                    }
                }

                else if(i==5)
                {
                   for(j=1; j<=n; j++)
                   {
                       for(k=1; k<=50; k++)
                        printf(" ");

                       for(k=1; k<=n*1; k++)
                        printf(" ");

                        for(k=1; k<=n*1; k++)
                        printf("*");

                        for(k=1; k<=n*5; k++)
                        printf(" ");

                        for(k=1; k<=n*1; k++)
                        printf("*");

                        for(k=1; k<=n*1; k++)
                        printf(" ");

                        printf("\n");
                   }
                }

                if(i==6)
                {
                    for(j=1; j<=n; j++)
                    {
                        for(k=1; k<=50; k++)
                        printf(" ");

                    for(k=1; k<=2*n; k++)
                    printf(" ");

                    for(k=1; k<=1*n; k++)
                    printf("*");

                    for(k=1; k<=3*n; k++)
                    printf(" ");

                    for(k=1; k<=1*n; k++)
                    printf("*");

                    for(k=1; k<=2*n; k++)
                    printf(" ");

                   // break;
                   printf("\n");
                    }
                }

                else if(i==7)
                {
                  for(j=1; j<=n; j++)
                  {
                      for(k=1; k<=50; k++)
                        printf(" ");

                       for(k=1; k<=n*3; k++)
                        printf(" ");

                         for(k=1; k<=n*1; k++)
                        printf("*");

                         for(k=1; k<=n*1; k++)
                        printf(" ");

                         for(k=1; k<=n*1; k++)
                        printf("*");

                       for(k=1; k<=n*3; k++)
                        printf(" ");


                      printf("\n");
                  }
                }

                else if(i==8)
                {
                    for(k=1; k<=50; k++)
                        printf(" ");

                       for(k=1; k<=n*4; k++)
                        printf(" ");

                        for(k=1; k<=n*1; k++)
                        printf("*");


                       for(k=1; k<=n*4; k++)
                        printf(" ");

                       printf("\n");
                }
        }
        printf("\n");
    }


return 0;
}
