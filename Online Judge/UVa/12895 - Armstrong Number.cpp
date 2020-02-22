#include<stdio.h>
#include<math.h>

int main()
{
    int n,r,m,count,sum,t,i;

    scanf("%d",&t);
    for(i=1; i<=t; i++)
    {
    scanf("%d",&n);

    m=n;

     count = 0;
    while(m!=0)
    {
        m = m/10;
        count++;
    }

    m=n;

    sum =0;
    while(m!=0)
    {
        r = m%10;
        m= m/10;

       sum = sum + pow(r,count);
    }

    if(sum == n)
        printf("Armstrong\n");
    else
        printf("Not Armstrong\n");
    }


    return 0;
}
