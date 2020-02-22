#include<bits/stdc++.h>

using namespace std;

int main()
{
    double a,b,c;

    cin>>c>>a;

    b=sqrt(c*c-a*a);

   // cout<<b<<endl;
    printf("%.0lf degree.\n",atan(a/b)*180/3.1415);


    return 0;
}
