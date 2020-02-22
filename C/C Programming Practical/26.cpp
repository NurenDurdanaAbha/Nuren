#include <stdio.h>
int main()
{
  int a[100], max,min, n, i;

    printf("Give the loop controller: ");
   scanf("%d", &n);

    printf("Give the Integer numbers: ");
   for (i = 0; i < n; i++)
  {
    scanf("%d", &a[i]);
  }
    max= a[0];
   for (i = 0; i < n; i++)
  {
    if (max< a[i])
    {
       max  = a[i];
    }
    if(min> a[i])
    {
        min = a[i];
    }
  }
  printf("Largest element is: %d\n",max);
   printf("Smallest element is: %d\n",min);
  return 0;
}
