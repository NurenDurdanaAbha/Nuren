#include<iostream>

using namespace std;

int main()
{
   // freopen("output.txt","w",stdout);

    int n,b,h,w,p,bed,cost[10000],i,j,k,flag;

    while(cin>>n>>b>>h>>w)
    {
//        if(n==0 && b==0 && h==0 && w==0)
//            break;

        k=1;
        flag=0;
       for(i=1; i<=h; i++)
       {
           cin>>p;
           for(j=1; j<=w; j++)
           {
               cin>>bed;
               if(bed>=n)
               {
                  cost[k++]=n*p;
                  flag=1;
               }
           }
       }
        int min=cost[1];

        for(i=1; i<k; i++)
        {
            if(min>cost[i])
                min=cost[i];
        }

       if(flag==0 || min>b)
        cout<<"stay home"<<endl;
       else
        cout<<min<<endl;
    }
   // system("notepad output.txt");


    return 0;
}
