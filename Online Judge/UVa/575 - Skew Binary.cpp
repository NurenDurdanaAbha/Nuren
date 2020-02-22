#include<iostream>
#include<cmath>

using namespace std;

int main()
{
    //freopen("output.txt","w",stdout);

    string n;
    int sum,l,i;

    while(cin>>n)
    {
        if(n=="0")
            break;

        l=n.size();

        sum=0;
        for(i=0; i<l; i++)
        {
            sum+=(n[i]-48)*(pow(2,l-i)-1);
        }

        cout<<sum<<endl;
    }

  //  system("notepad output.txt");


    return 0;
}
