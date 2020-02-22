#include<iostream>

using namespace std;

int main()
{
    int n,m,x,count=0;
    string s;

    cin>>n>>m;
    for(int i=1; i<=n; i++)
    {
        cin>>x;
        if(x==1)
            count++;
        else if(x==2)
        {
            getline(cin,s);
        }
    }
    cout<<count<<endl;


    return 0;
}
