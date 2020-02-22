#include<bits/stdc++.h>

using namespace std;

int main()
{
    //freopen("output.txt","w",stdout);

    string s1, s[1000];
    int a1, a[1000],test,max,i,t=1;

    cin>>test;
    while(test--)
    {
        for(i=1; i<=10; i++)
        {
            cin>>s1;
            s[i]=s1;
            cin>>a1;
            a[i]=a1;
        }
//        for(i=1; i<=10; i++)
//            cout<<a[i];

        max=a[1];

        for(i=1; i<=10; i++)
        {
            if(max<a[i])
                max=a[i];
        }

       // cout<<max<<endl;

        cout<<"Case #"<<t++<<":"<<endl;
        for(i=1; i<=10; i++)
        {
            if(a[i]==max)
                cout<<s[i]<<endl;
        }

    }
   // system("notepad output.txt");



    return 0;
}
