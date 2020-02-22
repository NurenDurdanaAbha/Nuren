#include<stdio.h>
int main()
{
    int a[9999],b[1000],i,j,x,n;
    for(i=0;scanf("%d",&a[i])!=EOF;i++)
        n = i;
        int max = 0;
        for(j=0;j<n;j++)
        {
            x = a[j];
            b[x]++;
            if(max < x)
                max = x;
        }
        for(j=1;j<=max;j++)
        {
            if(b[j]!=0)
            printf("%d %d\n",j,b[j]);
        }
    return 0;
}
