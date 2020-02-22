#include<iostream>
#include<stdio.h>

using namespace std;

int main()
{
    double x,y,p;
    char c='%';

    while(scanf("%lf%lf",&x,&y)!=EOF)
    {
        p=(y/x)*100.0;

        printf("%.2lf%c\n",p,c);
    }

    return 0;
}
