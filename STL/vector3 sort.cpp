#include<iostream>
#include<stdio.h>
#include<vector>
#include<algorithm>

using namespace std;


decending(int a, int b)
{
    return (a>b);
}

int main()
{
    vector<int> vect;
    vector<int>::iterator it;

    vect.push_back(10);
    vect.push_back(432);
    vect.push_back(32);
    vect.push_back(52);
    vect.push_back(17);
    vect.push_back(50);

      ///sort
//    sort(vect.begin(), vect.end());
//
//    for(it=vect.begin(); it!=vect.end(); it++)
//        printf("%d  ",*it);
//        cout<<endl<<endl;


      ///decending order a sort
//    sort(vect.begin(), vect.end(), decending);
//
//    for(it=vect.begin(); it!=vect.end(); it++)
//        printf("%d  ",*it);
//        cout<<endl<<endl;




    ///first 4 ta input sort
    sort(vect.begin(), vect.begin()+4);

    for(it=vect.begin(); it!=vect.end(); it++)
        printf("%d  ",*it);




    return 0;
}
