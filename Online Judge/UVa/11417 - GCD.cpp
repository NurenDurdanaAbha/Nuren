#include<bits/stdc++.h>

using namespace std;

int GCD(int a, int b)
{
    int r,x;

    r=b%a;
    x=a;

    while(r!=0)
    {
        x=r;
        r=a%x;
        a=x;
    }

        return x;
}


int main()
{
    //freopen("output.txt","w",stdout);

    int i,j,n,G;

    while(cin>>n)
    {


    if(n==0)
        break;

    G=0;
    for(i=1;i<n;i++)
    {
       for(j=i+1;j<=n;j++)
            {
                G+=GCD(i,j);
            }
    }

    cout<<G<<endl;
    }

//system("notepad output.txt");

    return 0;
}
