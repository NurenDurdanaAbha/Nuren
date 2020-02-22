#include<iostream>
#include<cstdio>
#include<cstring>

using namespace std;

int main()
{
    char p[10000];
    int test,t,i,count1,count2,count3,count4,count5,count6,count7,min;

    scanf("%d\n",&test);
    for(t=1; t<=test; t++)
    {
        count1=0;
        count2=0;
        count3=0;
        count4=0;
        count5=0;
        count6=0;
        count7=0;

       cin>>p;
    for(i=0; i<strlen(p); i++)
    {
        if(p[i]=='A')
            count1++;
        else if(p[i]=='R')
            count2++;
        else if(p[i]=='M')
            count3++;
        else if(p[i]=='G')
            count4++;
        else if(p[i]=='I')
            count5++;
        else if(p[i]=='T')
            count6++;
        else
            count7++;
    }

    min=count1/3;

    if(count2/2<min)
        min=count2/2;
    if(count3<min)
        min=count3;
    if(count4<min)
        min=count4;
    if(count5<min)
        min=count5;
    if(count6<min)
        min=count6;

    cout<<min<<endl;

}


    return 0;
}
