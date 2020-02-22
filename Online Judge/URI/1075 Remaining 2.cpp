#include<bits/stdc++.h>
#include<iostream>

using namespace std;

int main()
{
   // freopen("output.txt","w",stdout);

    long long int n,i;

    cin>>n;

    for(i=1; i<10000; i++)
    {
        if(i%n==2)
            cout<<i<<endl;
    }

   // system("notepad output.txt");


    return 0;
}
