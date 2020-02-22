#include<bits/stdc++.h>

using namespace std;

int main()
{
  //  freopen("output.txt","w",stdout);

    long long int test,a,b,c,d;

    cin>>test;
    while(test--)
    {
        cin>>a>>b>>c>>d;

        if(a==b && b==c && c==d && d==a)
            cout<<"square"<<endl;
        else if(a==b && c==d || a==c && b==d || a==d && b==c)
            cout<<"rectangle"<<endl;
        else if(a<b+c+d && b<a+c+d && c<a+b+d && d<a+b+c && a!=0 && b!=0 && c!=0 && d!=0)
            cout<<"quadrangle"<<endl;
        else
            cout<<"banana"<<endl;
    }

    //system("notepad output.txt");

    return 0;
}
