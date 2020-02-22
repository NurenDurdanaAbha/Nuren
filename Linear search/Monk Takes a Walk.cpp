#include<bits/stdc++.h>

using namespace std;

int main()
{
    string a;
    int i,count,test,t,l;

    cin>>test;
    getchar();
    for(t=1; t<=test; t++)
    {
      cin>>a;
      l=a.length();

      count=0;
      for(i=0; i<l; i++)
      {
          if(a[i]=='A' || a[i]=='a' || a[i]=='E' || a[i]=='e' || a[i]=='I' || a[i]=='i' || a[i]=='O' || a[i]=='o' || a[i]=='U' || a[i]=='u')
            count++;
      }

      cout<<count<<endl;
    }


    return 0;
}
