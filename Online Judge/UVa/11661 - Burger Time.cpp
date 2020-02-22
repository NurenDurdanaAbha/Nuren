#include<bits/stdc++.h>

using namespace std;

int main()
{
freopen("output.txt","w",stdout);

    long int n,R[90000],D[90000],i,j,k,countR,countD,x,min,flag;
    char s[200000];

    while(scanf("%ld",&n)!=EOF)
    {
        if(n==0)
            break;

        for(i=1; i<=n; i++)
            cin>>s[i];

        j=1;
        k=1;
        countR=0;
        countD=0;
        flag=0;
        for(i=1; i<=n; i++)
        {
            if(s[i]=='Z')
            {
                flag=1;
                    break;
            }
            else
            {
                if(s[i]=='R')
                {
                    R[j++]=i;
                    countR++;
                }
                else if(s[i]=='D')
                {
                    D[k++]=i;
                    countD++;
                }
            }

        }

// for(j=1; j<=countR; j++)
// printf("%d ",R[j]);
//
// cout<<endl;
//
// for(k=1; k<=countX; k++)
// printf("%d ",D[k]);
//
// cout<<endl;

        min=2147483647;
        i=1;
        for(j=1; j<=countR; j++)
        {
            for(k=1; k<=countD; k++)
            {
                //x=(abs(R[j]-D[k]));
                if(R[j]>D[k])
                    x=R[j]-D[k];
                else
                    x=D[k]-R[j];
//countX++;
// cout<<"x: "<<x<<endl;
                if(min>=x)
                    min=x;
            }
        }

// for(i=1; i<=countX; i++)
// printf("%d ",x[i]);

// min=x[1];
//
// for(i=1; i<=countX; i++)
// {
// if(min>x[i])
// min=x[i];
// }

//cout<<endl;

                if(flag==1)
                    cout<<0<<endl;
                else
                    cout<<min<<endl;

    }

system("notepad output.txt");

        return 0;
}
