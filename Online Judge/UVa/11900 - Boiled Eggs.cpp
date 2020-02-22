#include<stdio.h>

int main()
{
    int n,p,q,test,weight[50],sum,count,t;

    scanf("%d",&test);
      for(t=1; t<=test; t++)
        {
            scanf("%d%d%d",&n,&p,&q);

        for(int i=0; i<n; i++)
            scanf("%d",&weight[i]);

        sum=0;
        count=0;
        for(int i=0; i<p; i++)
        {
            sum+=weight[i];
            if(i<n && sum<=q)
                count++;
        }

        printf("Case %d: %d\n",t,count);
    }



    return 0;
}
