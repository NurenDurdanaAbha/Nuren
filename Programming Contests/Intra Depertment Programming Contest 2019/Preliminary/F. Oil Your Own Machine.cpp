#include<iostream>
#include<math.h>

using namespace std;

int main()
{
    int l,c,r1,r2,r;

    while(cin>>l>>c>>r1>>r2)
    {
        if(l==0 && c==0 && r1==0 && r2==0)
            break;

    r=2*r1+2*r2;

    if(r<l || r<c)
        cout<<"P"<<endl;
    else
        cout<<"I"<<endl;

    }


    return 0;
}
