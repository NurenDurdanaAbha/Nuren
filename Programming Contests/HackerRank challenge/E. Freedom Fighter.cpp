#include<iostream>
#include<stdio.h>

using namespace std;

int main()
{
    int test,n,a[1000],b[1000],i,count,t=1;

    scanf("%d",&test);
    while(test--)
    {
        scanf("%d",&n);
        for(i=1; i<=n; i++)
        {
           scanf("%d",&a[i]);
        }

        for(i=1; i<=n; i++)
        {
           scanf("%d",&b[i]);
        }

        count=0;
        for(i=1; i<=n; i++)
        {
           if(a[i]==1 && b[i]>=18)
            count++;
        }

        printf("Family %d: %d\n",t++,count);
    }

    return 0;
}
