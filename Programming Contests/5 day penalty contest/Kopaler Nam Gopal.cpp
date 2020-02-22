#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,mrks[201],i,g=0,m=0,f=0,max;

    cin>>n;
    for(i=1; i<=n; i++)
    {
       cin>>mrks[i];

       if(mrks[i]<=40)
            f++;
       else if(mrks[i]>=41 && mrks[i]<=60)
            m++;
       else
            g++;
    }

    if(abs(m-g)<=f)
        cout<<"Bohishkar how!"<<endl;
    else
        cout<<"Passed!"<<endl;


    return 0;
}
