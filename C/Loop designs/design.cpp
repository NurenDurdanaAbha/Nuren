#include<iostream>

using namespace std;

int main()
{
    int i,j,n=7,s,k=0;

    for(i=1; i<=n; i++)
    {
        for(s=1; s<=6*(n-i); s++)
        {
            cout<<" ";
        }

        for(j=1; j<=i; j++)
        {
            cout<<"*"<<k;

            if(k<=9)
                cout<<"    ";
            else
                cout<<"   ";

        }

       cout<<endl;
       k++;
    }

        for(i=n-1; i>=1; i--)
    {
        for(s=1; s<=6*(n-i); s++)
        {
            cout<<" ";
        }

        for(j=1; j<=i; j++)
        {
                cout<<"*"<<k;

                if(k<=9)
                    cout<<"    ";
                else
                    cout<<"   ";
        }
        cout<<endl;
        k++;

    }
    return 0;
}
