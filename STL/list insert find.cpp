#include<iostream>
#include<stdio.h>
#include<list>
#include<algorithm>

using namespace std;

int main()
{
    int arr[5]={7,3,4,-2,9};

    list<int> mylist(arr, arr+5);
    list<int>::iterator it;

    it = find(mylist.begin(), mylist.end(), 4); ///place find krbe

    mylist.insert(it,10);   ///insert krbe

    for(it=mylist.begin(); it!=mylist.end(); it++)
        printf("%d  ",*it);
        cout<<endl;

    it = find(mylist.begin(), mylist.end(), 4);
    mylist.erase(it);

    for(it=mylist.begin(); it!=mylist.end(); it++)
        printf("%d  ",*it);
        cout<<endl;


    return 0;
}
