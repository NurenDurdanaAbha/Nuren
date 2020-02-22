#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    set<int>distinct;
    set<int>::iterator it;
    cin>>n;

    vector<int>in;
    int k;
    for(int i=0;i<n;i++)
    {
        cin>>k;
        in.push_back(k);
        distinct.insert(n-k);
    }
    int sum=0;
    for(it=distinct.begin();it!=distinct.end();it++)
    {
        sum+=(*it);
    }
    //cout<<sum;
    if(sum>n)
        cout<<"Impossible"<<endl;
    else
        cout<<"Possible"<<endl;
    return 0;
}
