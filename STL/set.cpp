#include<iostream>
#include<stdio.h>
#include<set>

using namespace std;

int main()
{
    set<int>s;
    set<int>::iterator it;

    s.insert(20);
    s.insert(10);
    s.insert(5);
    s.insert(25);
    s.insert(15);

    it = s.find(20);
    s.erase(it);

    for(it=s.begin(); it!=s.end(); it++)
        cout<<*it<<endl;

    return 0;
}
