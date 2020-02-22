#include<iostream>

using namespace std;

int main()
{
    int a[100],b[100],i, point=0,pointt=0;

    for(i=0; i<3; i++)
        cin>>a[i];

    for(i=0; i<3; i++)
        cin>>b[i];



   for(i=0; i<3; i++)
   {
       if(a[i]>b[i])
        point++;

       if(a[i]<b[i])
        pointt++;
   }


           cout<<point<<" "<<pointt<<endl;




    return 0;
}
