#include<iostream>
#include<math.h>

using namespace std;

int main()
{
   int n,m,test,t,flag,i;

   cin>>test;
   for(t=1; t<=test; t++)
   {
       cin>>n;
   m=sqrt(n);

   if(m*m==n)
   {

  // cout<<m<<endl;
   flag=0;
   for (i=2 ; i<m ; i++)
   {
      if (m%i==0)
        flag=1;
   }

   if (flag==1)
    cout<<"Ronaldo does not love "<<n<<endl;

   else
      cout<<"Ronaldo loves "<<n<<endl;
   }
   else
    cout<<"Ronaldo does not love "<<n<<endl;

   }

   return 0;
}
