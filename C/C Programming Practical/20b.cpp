#include <stdio.h>
int main()
{
  int a[100], max, n, i;

    printf("Give the elements of array: ");
   scanf("%d", &n);

    printf("Give the Integer numbers: ");
   for (i = 0; i < n; i++)
    scanf("%d", &a[i]);

    max= a[0];
   for (i = 0; i < n; i++)
  {
    if (max< a[i])
       max  = a[i];
  }
  printf("Maximum element is: %d\n",max);
  return 0;
}
