#include<bits/stdc++.h>

using namespace std;

int main()
{
    freopen("output.txt","w",stdout);

    int test,x,y,z;

    cin>>test;
    while(test--)
    {
        cin>>x>>y>>z;

        if(x<y+z && y<x+z && z<x+y)
            cout<<"OK"<<endl;
        else
            cout<<"Wrong!!"<<endl;
    }
system("notepad output.txt");

    return 0;
}
