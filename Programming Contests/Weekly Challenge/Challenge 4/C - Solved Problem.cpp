#include<iostream>

using namespace std;

int main()
{
    int n,k,time=0,i,j,count=0;

    cin>>n>>k;

    //cout<<240-k<<endl;
    for(i=1; i<=n; i++)
    {
        time+=5*i;

        //cout<<time<<endl;

        if(time>240-k)
            break;

        count++;
    }


      cout<<count<<endl;


    return 0;
}
