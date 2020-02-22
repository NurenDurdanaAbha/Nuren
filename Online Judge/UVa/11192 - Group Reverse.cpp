#include<bits/stdc++.h>

using namespace std;

int main()
{
    char s[101],a[101];
    int i,j,g,len,x,y,z,count=0;

    while(scanf("%d",&g)!=EOF)
    {
        if(g==0)
            break;

        getchar();

        cin.getline(s,101);
        len=strlen(s);
       // cout<<len<<endl;

        for(i=0; i<len; i++)
           a[i]='-';

//        cout<<endl<<s[0]<<endl;
//        cout<<s[1]<<endl;
//        cout<<s[2]<<endl;
//        cout<<s[3]<<endl;
//        cout<<s[4]<<endl;
//        cout<<s[5]<<endl;
//        cout<<s[6]<<endl;
//        cout<<s[7]<<endl;
//        cout<<s[8]<<endl;
//        cout<<s[9]<<endl;

     //   cout<<endl;

        z=0;
        for(x=1; x<=g; x++)
        {
            y = x*(len/g);

//            cout<<"x: "<<x<<endl;
//            cout<<"z: "<<z<<endl;
//            cout<<"y: "<<y<<endl;

            int p=y;
            for(i=z; i<y; i++)
            {
               // cout<<"INSIDE i: "<<i<<endl;
                a[--p]=s[i];
                //cout<<"INSIDE j: "<<y<<endl;
               // cout<<endl;
               //     count++;
            }
            z = x*(len/g);
           // cout<<y<<endl;
        }

//        cout<<a[0]<<endl;
//        cout<<a[1]<<endl;
//        cout<<a[2]<<endl;
//        cout<<a[3]<<endl;
//        cout<<a[4]<<endl;
//        cout<<a[5]<<endl;
//        cout<<a[6]<<endl;
//        cout<<a[7]<<endl;
//        cout<<a[8]<<endl;
//        cout<<a[9]<<endl;

        for(i=0; i<len; i++)
        {
            cout<<a[i];
        }
        cout<<endl;

        //cout<<"count: "<<count<<endl;
    }

    return 0;
}
