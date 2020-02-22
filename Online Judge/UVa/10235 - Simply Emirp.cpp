#include<stdio.h>
#include<math.h>
#include<bits/stdc++.h>

int main()
{
   // freopen("output.txt","w",stdout);

    long long int i,n,flag,r,m,p,f,w,x;

    while(scanf("%lld",&n)!=EOF)
    {
//        if(n==0)
//            break;

        flag=1;
        m=n;

    for(i=2; i<=sqrt(n); i++)
    {
       if(n%i==0)
      {
        flag=2;
        break;
      }
    }
     p=0;
     f=1;
      while(n!=0)
      {
          r = n%10;
          n= n/10;

          p = p*10 + r;
      }

      if(p==2)
        f=3;

      for(i=2; i<p; i++)
      {
      if(p%i==0 || p==m)
      {
        f=3;
        break;
      }

}

    if(m==1)
        printf("1 is prime.\n",m);
    else if(flag==1 && f!=1)
        printf("%lld is prime.\n",m);
    else if(flag==1 && f==1)
        printf("%lld is emirp.\n",m);
    else
        printf("%lld is not prime.\n",m);
    }
   // system("notepad output.txt");

    return 0;
}
