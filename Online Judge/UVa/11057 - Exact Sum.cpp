#include<bits/stdc++.h>

using namespace std;

int main()
{
   // freopen("output.txt","w",stdout);

    long long int n,a[100000],i,tk,m,o,j,t=1,temp;

    while(scanf("%lld",&n)!=EOF)
    {
//        if(n==0)
//            break;


        for(i=1; i<=n; i++)
        {
           cin>>a[i];

           for(j=1; j<i; j++)
           {
               if(a[j]>a[i])
               {
                   temp=a[j];
                   a[j]=a[i];
                   a[i]=temp;
               }
           }
        }


        cin>>tk;

//        for(i=1; i<=n; i++)
//            printf("%d ",a[i]);
//            cout<<endl;

        for(i=1; i<n; i++)
        {
            for(j=n; j>1; j--)
            {
                if(a[i]+a[j]==tk && a[i]<=a[j] && i!=j)
                {
                    m=a[i];
                    o=a[j];
                  //  cout<<endl<<"m: "<<m<<endl<<"o: "<<o<<endl;
                }
            }
        }
        printf("Peter should buy books whose prices are %lld and %lld.\n\n",m,o);

    }
    //system("notepad output.txt");



    return 0;
}
