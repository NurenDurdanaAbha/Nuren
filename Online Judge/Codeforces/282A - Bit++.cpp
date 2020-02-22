#include<bits/stdc++.h>
#include<string.h>

using namespace std;

int main()
{
    int t,test,x=0;
    char arr[4];

    cin>>test;
    getchar();
    for(t=1; t<=test; t++)
    {
        gets(arr);
        //getchar();

        if(strcmp(arr,"X++")==0)
            x++;
        else if(strcmp(arr,"++X")==0)
            ++x;
        else if(strcmp(arr,"X--")==0)
            x--;
        else if(strcmp(arr,"--X")==0)
            --x;
    }

    cout<<x<<endl;

   return 0;

}
