#include<stdio.h>

int main()
{
    int l1, l2, l3, l, degree, total;

    while(scanf("%d%d%d%d",&l,&l1,&l2,&l3))
    {
        if(l ==0 && l1==0 && l2==0 && l3==0)
            break;

        total = 1080;

        if( l>l1)
            degree = ( l-l1)*9;
        else if(l==l1)
            degree = 0;
        else
            degree = 360-(l1-l)*9;

        total = total + degree;


        if( l1>l2)
            degree = 360-(l1-l2)*9 ;
        else if(l1==l2)
            degree = 0;
        else
            degree = (l2-l1)*9 ;

        total = total + degree;


        if( l2>l3)
            degree = (l2-l3)*9;
        else if(l2==l3)
            degree = 0;
        else
            degree = 360-(l3-l2)*9;

        total = total + degree;


        printf("%d\n",total);
    }

    return 0;
}
