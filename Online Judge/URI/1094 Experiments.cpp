#include<iostream>
#include<stdio.h>

using namespace std;

int main()
{
    char ch,a='%';
    int test,t;
    float c,r,s,count,countC=0,countR=0,countS=0,n;

    cin>>test;
    for(t=1; t<=test; t++)
    {
        cin>>n;
        getchar();
        cin>>ch;

        if(ch=='C')
            countC+=n;
        else if(ch=='R')
            countR+=n;
        else if(ch=='S')
            countS+=n;
    }

    count=countC+countR+countS;

    c=countC/count;
    r=countR/count;
    s=countS/count;

    cout<<"Total: "<<count<<" cobaias"<<endl;
    cout<<"Total de coelhos: "<<countC<<endl;
    cout<<"Total de ratos: "<<countR<<endl;
    cout<<"Total de sapos: "<<countS<<endl;
    printf("Percentual de coelhos: %.2f %c\n",c*100,a);
    printf("Percentual de ratos: %.2f %c\n",r*100,a);
    printf("Percentual de sapos: %.2f %c\n",s*100,a);


    return 0;
}
