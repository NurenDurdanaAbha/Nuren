#include<stdio.h>

using namespace std;

int main()
{
    int test,t,count=0;
    double w,h,ratio;

    scanf("%d",&test);
    for(t=1; t<=test; t++)
    {
        scanf("%lf%lf",&w,&h);

        if(w>h)
            ratio=w/h;
        else
            ratio=h/w;

        if(ratio>=1.6 && ratio<=1.7)
            count++;
    }
    printf("%d\n",count);


    return 0;
}
