#include<bits/stdc++.h>

using namespace std;

int main()
{
    //freopen("output.txt","w",stdout);

    long long int a[100000],i=1,n,j,k,temp,x,y,z,p;

    while(scanf("%lld",&n)!=EOF)
    {
//        if(n==0)
//            break;

        a[i++]=n;

        temp=0;
        for(k=1; k<i-1; k++)
        {
            for(j=1; j<i-k; j++)
            {
                if(a[j] > a[i-1])
                {
                    p=i-2;
                    while(p>=j)
                    {
                        a[p+1]=a[p];
                        p--;
                    }
                    a[p+1]=n;
                    temp=1;
                }
                if(temp==1)
                    break;
            }
            if(temp==1)
                break;
        }







        p=i-1;
        for(k=1; k<i; k++)
            printf("%lld ",a[k]);
        cout<<endl;


        if(p%2!=0)
        {
          x = p/2 + 1;
          cout<<a[x]<<endl;
        }
        else
        {
           y = p/2;
          // cout<<"y: "<<y<<endl;
           z = a[y] + a[y+1];
          // cout<<"z: "<<z<<endl;
           cout<<z/2<<endl;
        }

    }
    //system("notepad output.txt");


    return 0;
}
