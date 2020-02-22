#include<iostream>

using namespace std;

int main()
{
    int n,a[10],r,i=1,sum=0,sum1=0,div=0,result=0;

    cin>>n;

    while (n!=0)
    {
      r=n%10;
      sum=sum+r;
      n=n/10;

      a[i++]=r;
    }

   // cout<<sum<<endl<<a[1]<<" "<<a[2]<<" "<<a[3]<<endl;

    sum1=2*(a[1]*10)+(a[2]+a[3]) + 2*(a[2]*10)+(a[1]+a[3]) + 2*(a[3]*10)+(a[1]+a[2]);
   // cout<<sum1<<endl;

    div=sum1/sum;
   // cout<<div<<endl;

    result=div/2;
    cout<<result<<endl;

    return 0;
}
