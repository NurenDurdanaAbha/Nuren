#include<stdio.h>

int main()
{
    int a[1000],n,temp,i,j,count,t,test;

    printf("Lumberjacks:\n");
    scanf("%d",&test);
    for(t=1; t<=test; t++)
    {
        for(i=0; i<10; i++)
            scanf("%d",&a[i]);

            count=0;
for(i=0; i<10-1; i++)
    {
        for(j=0; j<10-1-i; j++)
        {
            if(a[j] > a[j+1])
            {
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;

                count++;
            }
        }
    }

   if(count==0 || count==45)
       printf("Ordered\n");
   else
       printf("Unordered\n");

    }

    return 0;
}
