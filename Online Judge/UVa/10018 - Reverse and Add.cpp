#include<bits/stdc++.h>

using namespace std;

int main()
{
    //freopen("output.txt","w",stdout);

    long long int t,test,r,n,sum,sum1,m,i,count,p;

    cin>>test;
    while(test--)
    {
        cin>>n;

     count=0;

      sum1=0;
         p=n;
        while(p!=0)
        {
        r=p%10;
        p=p/10;

        sum1=sum1*10+r;
        }
        long long int s=sum1+n;

       // cout<<endl<<n<<endl<<sum1<<endl<<s<<endl;

     while(1)
     {
         sum=0;
         m=s;
        while(s!=0)
        {
        r=s%10;
        s=s/10;

        sum=sum*10+r;
        }

            //cout<<endl<<m<<endl<<sum<<endl;
        //add=0;
        if(m==sum)
        {
            count++;
            break;
        }
        else
        {
            s=m+sum;
            count++;
           // goto first;
        }
     }
     cout<<count<<" "<<m<<endl;
    }

   // system("notepad output.txt");

    return 0;
}
