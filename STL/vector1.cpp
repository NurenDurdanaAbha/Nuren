#include<iostream>
#include<stdio.h>
#include<vector>

using namespace std;

int main()
{
    ///vector is one kind of array


    vector <int> vect; ///vector declaration

    vect.push_back(34);
    vect.push_back(10); ///vector initialization
    vect.push_back(28);

    cout<<vect.size()<<endl;

    for(int i=0; i<vect.size(); i++) ///vector print out
        printf("%d ",vect[i]);


    vector <int> v(5,0); ///v(vector_size, initialization)

    cout<<endl<<v.size()<<endl;

    for(int i=0; i<v.size(); i++)
        printf("%d ",v[i]);


    return 0;
}
