#include<iostream>
#include<stdio.h>
#include<iterator>
#include<map>

using namespace std;

int main()
{
    map<string, int> m;
    map<string, int>::iterator it;

   // m["Navel"]=180;
    m["Nuren"]=124;
    m["Soma"]=127;
    m.insert(make_pair("Fahim",123));
    m.insert(make_pair("Navel",125));


    for(it=m.begin(); it!=m.end(); it++)
        cout<<it->first<<" "<<it->second<<endl;

    return 0;
}
