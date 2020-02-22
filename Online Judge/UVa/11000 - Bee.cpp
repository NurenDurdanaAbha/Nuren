#include<bits/stdc++.h>

using namespace std;

int main()
{
   // freopen("output.txt","w",stdout);

    long long int bee[90000];
    int i,n;

    while(cin>>n)
    {
        if(n==-1)
            break;

    bee[0]=0;
    bee[1]=1;

    for(i=2; i<=n+1; i++)
    {
        bee[i] = bee[i-1] + bee[i-2];

    }

//    for(i=0; i<n; i++)
//    {
//        printf("%d ",bee[i]);
//    }

    long long int male=0;
    for(i=0; i<=n; i++)
    {
       male = male + bee[i];
    }


    long long int total=0;
    for(i=0; i<=n+1; i++)
    {
       total = total + bee[i];
    }

    cout<<male<<" "<<total<<endl;
}

    //system("notepad output.txt");

    return 0;
}
