#include<bits/stdc++.h>

using namespace std;

int main()
{
    int length,test;
    char a[10];

    cin>>test;
    getchar();
    while(test--)
    {
      cin>>a;

      length=strlen(a);

      if(length==5)
            cout<<"3"<<endl;
      else
      {
          if(a[0]=='o' && a[1]=='n' || a[1]=='n' && a[2]=='e' || a[0]=='o' && a[2]=='e')
            cout<<"1"<<endl;
          else
            cout<<"2"<<endl;
      }
    }


    return 0;
}
