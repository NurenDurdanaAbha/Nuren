#include<iostream>

using namespace std;

int main()
{
    int test,r,c;

    cin>>test;
    for(int t=1; t<=test; t++)
    {
        cin>>r>>c;

        int count=0;

        if(r+2<=8)
        {
            if(c+1<=8)
                count++;
            if(c-1>=1)
                count++;
        }

        if(r-2>=1)
        {
            if(c+1<=8)
                count++;
            if(c-1>=1)
                count++;
        }

        if(c+2<=8)
        {
            if(r+1<=8)
                count++;
            if(r-1>=1)
                count++;
        }

        if(c-2>=1)
        {
            if(r+1<=8)
                count++;
            if(r-1>=1)
                count++;
        }

        cout<<"Case "<<t<<": "<<count<<endl;
    }




    return 0;
}
