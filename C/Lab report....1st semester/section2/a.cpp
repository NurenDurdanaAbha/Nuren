#include<stdio.h>
#include<math.h>
int main()
{
   int n,i;
   float sum=0, sum1=0, a[1000], average, std_devi, vari;
   scanf("%d",&n);
   for(i=0; i<n; i++)
   {
       scanf("%f",&a[i]);
       sum=sum+a[i];
   }
   average = sum/ (float) n;
   for(i=0; i<n; i++)
   {
    sum1= sum1 + pow((a[i] - average),2);
   }
   vari = sum1/ (float)n;

   std_devi = sqrt(vari);

    printf("Average of all elements= %.2f\n",average);
    printf("Variance of all elements = %.2f\n",vari);
    printf("Standerd deviation = %.2f",std_devi);

    return 0;
}
