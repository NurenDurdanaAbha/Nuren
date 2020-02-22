#include<iostream>
#include<stdio.h>

using namespace std;

int main()
{
    int n,count=0,i;
    string a;

    cin>>n;
    getchar();
    for(i=1; i<=n; i++)
    {
        cin>>a;

        if(a=="Tetrahedron")
            count+=4;
        else if(a=="Cube")
            count+=6;
        else if(a=="Octahedron")
            count+=8;
        else if(a=="Dodecahedron")
            count+=12;
        else if(a=="Icosahedron")
            count+=20;
    }


    cout<<count<<endl;

    return 0;
}
