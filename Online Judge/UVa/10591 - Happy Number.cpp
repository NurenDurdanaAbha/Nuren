#include<bits/stdc++.h>

using namespace std;

int main()
{
    freopen("output.txt","w",stdout);

    long long int r,n,i,j,a[100000],p,m,test,t,k,flag,f,check[100000];

    scanf("%lld",&test);
    for(t=1; t<=test; t++)
    {
    scanf("%lld",&n);

    m=n;

  while(1)
  {
      // cout<<"m: "<<m<<endl;
   i=1;
   r=0;
    while(m!=0)
    {
        r=m%10;
        m=m/10;

        a[i++]=r;
    }

    p=i-1;
//    printf("p: %lld\n",p);
//
//    for(i=1; i<=p; i++)
//        printf("%lld ",a[i]);

    k=0;
    for(i=1; i<=p; i++)
    {
        k+=(a[i]*a[i]);
    }

    m=k;

    if(k<=9)
    {
        break;
    }

   // printf("\nm: %lld\n",m);

  }
        if(k==1 || k==7)
        {
            printf("Case #%lld: %lld is a Happy number.\n",t,n);
        }
        else
        {
           printf("Case #%lld: %lld is an Unhappy number.\n",t,n);
        }

    }

    system("notepad output.txt");

    return 0;
}
