#include<stdio.h>
int main()
{
    int n,k=1;
    while(scanf("%d",&n)!=EOF)
    {
        if(n<0)
           break;
        int i,j,m=0,sum=0;
        for(i=1;i<n;i=sum+1)
        {
            sum = sum + i;
                m++;
        }
        printf("Case %d: %d\n",k++,m);
    }

    return 0;
}
