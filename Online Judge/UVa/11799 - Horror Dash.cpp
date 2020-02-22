#include <stdio.h>
int main()
{
  int a[1000], max, n, i,t,k,j=1;

  scanf("%d",&t);
  for(k=1; k<=t; k++)
  {
   scanf("%d", &n);
   for (i = 0; i < n; i++)
    scanf("%d", &a[i]);

    max= a[0];
   for (i = 0; i < n; i++)
  {
    if (max< a[i])
       max  = a[i];
  }

 printf("Case %d: %d\n",j++,max);
  }

  return 0;
}
