#include<stdio.h>

int main()
{
    int a[10],i,sum=0;
    float avr,per;
    char ch='%';

    for(i=1; i<=5; i++)
    {
      printf("Enter the mark of subject %d: ",i);
      scanf("%d",&a[i]);
    }

    for(i=1; i<=5; i++)
    {
       sum=sum+a[i];
    }

    avr=sum/5.0;
    printf("Average mark: %.2f\n",avr);

    per=(sum/100.0)*100.0;
    printf("Percentage of marks: %.2f%c\n",per,ch);


    return 0;
}
