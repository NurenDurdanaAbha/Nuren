#include<stdio.h>
#include<math.h>

int main()
{
    int a[1000], n, s, i,j;

    scanf("%d",&n);
    for(i=0; i<n; i++)
        a[i]= 0;

    s = sqrt(n);
    for(i=2; i<=s; i++)
    {
        for(j=i+i; j<=n; j+=i)
        {
            if(a[j]==0)
                a[j] = 1;
        }
    }

    for(i=2; i<=n; i++)
    {
        if(a[i] == 0)
            printf("%d ",i);
    }


    return 0;
}
