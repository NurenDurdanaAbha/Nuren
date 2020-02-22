#include <stdio.h>
int main()
{
  int a[100], max, n, i,min,sum=0;

   scanf("%d", &n);
   for (i = 0; i < n; i++)
    scanf("%d", &a[i]);

    max= a[0];
    min = a[99];
   for (i = 0; i < n; i++)
  {
    if (max< a[i])
       max  = a[i];

    if(min > a[i])
        min = a[i];
  }

  sum = max + min;
  printf("%d\n%d\n\n",max,min);
  printf("%d\n",sum);
  return 0;
}
