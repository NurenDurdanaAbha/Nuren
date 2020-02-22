#include <iostream>
#include <stdio.h>
#include <algorithm>

using namespace std;


int main()
{
    int test,t,i;
    cin>>test;

    for(t=1; t<=test; t++)
    {
        int marks [7];
        for (i=0; i<7; i++)
            cin>>marks[i];

        sort(marks+4,marks+7);

        double sum=0;

        for(i=0; i<4; i++)
            sum+=marks[i];

        sum+=((marks[5]+marks[6])/2.0);

        printf("Case %d: ",t);

        if (sum>=90)
            cout<<"A";
        else if(sum>=80)
            cout<<"B";
        else if (sum>=70)
            cout<<"C";
        else if (sum>=60)
            cout<<"D";
        else
            cout<<"F";

        cout<<endl;
    }
}
