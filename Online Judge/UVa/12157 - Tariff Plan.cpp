#include<stdio.h>
#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    freopen("output.txt","w",stdout);

    int  i,d[100000],n,test,t,M,J,min,flag;

    scanf("%d",&test);
    for(t=1; t<=test; t++)
    {
        scanf("%d",&n);
        for(i=1; i<=n; i++)
            scanf("%d",&d[i]);

      //  for(i=1; i<=n; i++)
         //   printf("%d ",d[i]);

        M=0;
        for(i=1; i<=n; i++)
        {
            M = M + d[i]/30 + 1;
            //cout<<endl<<"M"<<i<<": "<<M<<endl;
        }
        M = M*10;

        J=0;
        for(i=1; i<=n; i++)
        {
            J = J + d[i]/60 + 1;
        }
        J=J*15;

        flag=0;
        if(M==J)
        {
            flag=1;
        }
        else
        {
           min=M;
        if(min>J)
            min=J;
        }

        if(flag==1)
            printf("Case %d: Mile Juice %d\n",t,M);
        else if(min==M)
            printf("Case %d: Mile %d\n",t,min);
        else
            printf("Case %d: Juice %d\n",t,min);

    }
    system("notepad output.txt");

    return 0;
}
