#include<iostream>
#include<stdio.h>
#include<cmath>

using namespace std;

int main()
{
   int x1,x2,y1,y2,x,y;
  // double diff;

   while(scanf("%d%d%d%d",&x1,&y1,&x2,&y2)!=EOF)
   {
       x = pow((x1-x2),2);
       y = pow((y1-y2),2);
       //diff = sqrt(x+y);

       //cout<<x<<" "<<y<<" "<<x+y<<endl;
       if(x+y<=36)
        printf("Enemy Killed!\n");
       else
        printf("Enemy Escaped!\n");
   }


   return 0;
}

