#include<stdio.h>

int main()
{
    long long int cigarette,butt,notun,baki,mot_cigarette;

    while(scanf("%lld%lld",&cigarette,&butt)!=EOF)
    {
        mot_cigarette = cigarette;
        while(cigarette >= butt)
        {
    notun = cigarette/butt;
    baki = cigarette%butt;

    mot_cigarette = mot_cigarette + notun;

    cigarette = notun + baki;
    }

    printf("%lld\n",mot_cigarette);
    }

    return 0;
}
