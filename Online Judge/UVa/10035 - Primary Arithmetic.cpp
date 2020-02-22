#include<stdio.h>
#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
   // freopen("output.txt","w",stdout);
    int a,b,sum,r1,r2,x[100000],y[100000],m,n,flag,t=1,tt,max,min;

    while(1)
    {
        cin>>a>>b;

        if(a==0 && b==0)
            break;

    int i=0;
    while(a!=0)
    {
        r1=a%10;
        a=a/10;

        x[i++]=r1;
    }

    int j=0;
    while(b!=0)
    {
        r2=b%10;
        b=b/10;

        y[j++]=r2;
    }

       if(i>j)
       {
          max=i;
          min=j;
       }

       else
       {
         max=j;
         min=i;
       }

        if(max==j)
        {
            for(int n=min; n<max; n++)
                x[n]=0;
        }
        else
        {
            for(int n=min; n<max; n++)
                y[n]=0;
        }

        /*    for(m=0; m<max; m++)
        cout<<x[m];

        cout<<endl;

    for(n=0; n<max; n++)
        cout<<y[n];

        cout<<endl; */


    int count=0;
    sum = 0;
    flag=0;

   // tt=1;
    for(m=0; m<max; m++)
    {
        for(n=0; n<max; n++)
        {
            if(m==n)
            {
                if(flag==0)
                    sum = x[m] + y[n];
                else
                    sum = x[m] + y[n]+1;

               // cout<<"sum"<<tt++<<" : "<<sum<<endl;

                flag=0;
                if(sum > 9)
                {
                   count++;
                   flag=1;
                }

            }
        }
    }

  //  cout<<endl<<"sum: "<<sum<<endl<<"count: "<<count<<endl;

    if(count==1)
        cout<<"1 carry operation."<<endl;
    else if(count>0)
        cout<<count<<" carry operations."<<endl;
    else
        cout<<"No carry operation."<<endl;

    }
    //system("notepad output.txt");

    return 0;
}
