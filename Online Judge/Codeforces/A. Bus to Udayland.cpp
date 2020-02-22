#include<iostream>
#include<stdio.h>

using namespace std;

int main()
{
    int n,i,l,j,flag=0;
    char s[100][100];

    cin>>n;
    getchar();

    for(i=1; i<=n; i++)
    {
        for(j=1; j<=5; j++)
            cin>>s[i][j];
    }

    for(i=1; i<=n; i++)
    {
        for(j=1; j<=5; j++)
        {
           if(s[i][j]=='O' && s[i][j+1]=='O')
           {
              s[i][j]='+';
              s[i][j+1]='+';

              flag=1;

              break;
           }
        }
        if(flag==1)
            break;
    }

    if(flag==1)
    {
      cout<<"YES"<<endl;

        for(i=1; i<=n; i++)
        {
            for(j=1; j<=5; j++)
                cout<<s[i][j];

                cout<<endl;
        }

        cout<<endl;
    }
    else
        cout<<"NO"<<endl;


    return 0;
}
