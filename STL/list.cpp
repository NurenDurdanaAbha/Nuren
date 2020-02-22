#include<iostream>
#include<stdio.h>
#include<list>
#include<iterator>
#include<queue>

using namespace std;

int main()
{
    list<float> mylist;
    list<float>::iterator it;

    mylist.push_back(20);
    mylist.push_back(78);
    mylist.push_front(-2);
    mylist.push_front(10);
    mylist.push_back(5);

    for(it=mylist.begin(); it!=mylist.end(); it++)
        printf("%.0f  ",*it);

        cout<<endl<<endl;
    mylist.reverse();    ///list or vector reverse krbe
    mylist.clear();      ///LIST or vector clear kre dbe

    for(it=mylist.begin(); it!=mylist.end(); it++)
        printf("%.0f  ",*it);

    return 0;
}
