#include<iostream>
#include<stdio.h>

using namespace std;

int main()
{
    string s;
    int t=1;

    while(getline(cin,s))
    {
        if(s=="Hajj")
            printf("Case %d: Hajj-e-Akbar\n",t++);
        else if(s=="Umrah")
            printf("Case %d: Hajj-e-Asghar\n",t++);
        else
            break;
    }


    return 0;
}
