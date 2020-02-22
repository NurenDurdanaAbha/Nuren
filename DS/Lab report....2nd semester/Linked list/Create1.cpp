#include<stdio.h>

struct node
{
    int info;
    node *link;
};

int main()
{
    node a,b,c,d,e,f;
    node *start;

    start=&a;
    printf("The first link: %d\n",start);

    a.info=100;
    a.link=&b;

    b.info=200;
    b.link=&c;

    c.info=300;
    c.link=&d;

    d.info=400;
    d.link=&e;

    e.info=500;
    e.link=&f;

    f.info=600;
    f.link=NULL;

    while(start!=NULL)
    {
        printf("info: %d, next link: %d\n",start->info,start->link);
        start=start->link;
    }

    return 0;
}
