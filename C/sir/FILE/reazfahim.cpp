#include<stdio.h>
#include<math.h>
int main()
{
    int n,i,flag = 1,a[1000];

    scanf("%d",&n);
    for(i=0; i<n; i++)
        scanf("%d",&a[i]);

    for(i=2; i<=a[i]-1; i++)
    {
        if(a[i]%i==0)
            {
                flag = 2;
                break;
            }
    }

       for(i=0; i<n; i++)
       {
             if(flag==1)
                printf("%d Prime\n",a[i]);
            else
                printf("%d Not Prime\n",a[i]);
       }

    return 0;
}
