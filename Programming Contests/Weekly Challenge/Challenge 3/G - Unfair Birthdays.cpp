#include<stdio.h>

int main()
{
// freopen("output.txt","w",stdout);

    int test,t,n,D,M,Y,QY,count,i;

    scanf("%d",&test);
    for(t=1; t<=test; t++)
    {
      scanf("%d%d%d%d",&D,&M,&Y,&QY);

      count=0;

      if(D==29 && M==2)
      {
          for(i=Y+1; i<=QY; i++)
          {
             if((i%4==0 && i%100!=0) || i%400==0)
                count++;
          }
          printf("Case %d: %d\n",t,count);
      }
      else
        printf("Case %d: %d\n",t,QY-Y);

    }

 // system("notepad output.txt");

    return 0;

}
