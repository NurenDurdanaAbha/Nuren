#include<iostream>

using namespace std;

int m=10;  ///global m

int main()
{
    int m=20; ///m declared, local to main
    {
        int k=m;
        int m=30;   ///m declared again, local to inner block

        cout<<"we are in inner block"<<endl;

        cout<<"k = "<<k<<endl;
        cout<<"m = "<<m<<endl;
        cout<<"::m = "<<::m<<endl;
    }

    cout<<endl<<"we are in outer block"<<endl;

    cout<<"m = "<<m<<endl;
    cout<<"::m = "<<::m<<endl;

    return 0;
}
