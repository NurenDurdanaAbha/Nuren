#include<bits/stdc++.h>

using namespace std;

 int a[200001];

int main()
{
     int n,q,v,k,count=0;

    scanf("%d%d",&n,&q);

    for(int i=1; i<=n; i++)
    {
       scanf("%d",&a[i]);

       if(a[i]!=0)
            count++;
    }


    while(q--)
    {
        scanf("%d%d",&v,&k);


        if(v==1)
        {
            a[k]--;
            if(a[k]==0)
                count--;
        }
        else if(v==2)
        {
            a[k]++;
            if(a[k]==1)
                count++;
        }

            printf("%d\n",count);
    }


    return 0;
}
