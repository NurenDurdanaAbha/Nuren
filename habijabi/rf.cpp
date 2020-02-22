#include<stdio.h>
int main()
{
int i,n,sum=0;
printf("N=");
scanf("%d",&n);
for(i=1;i<=n;i=i+2)
{
sum=sum+i;
}
printf("\n1+3+5+7+....+%d=%d",n,sum);

return 0;
}
