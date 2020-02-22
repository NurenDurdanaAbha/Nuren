#include<iostream>
#include<stdio.h>
#include<list>
#include<algorithm>

using namespace std;

int main()
{
    int arr[5]={7,3,4,-2,9};

    list<int>mylist(arr, arr+5);
    list<int>::iterator it;

    mylist.pop_front();
    mylist.pop_back();

    for(it=mylist.begin(); it!=mylist.end(); it++)
        cout<<*it<<"\t";
        cout<<endl;


    return 0;
}
