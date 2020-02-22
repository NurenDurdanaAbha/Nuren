#include<stdio.h>
#include<stdlib.h>

struct node
{
    int info;
    node *link;
};

int main()
{
    node *a,*b,*c, *d, *e, *start;

    a=(node *) malloc(sizeof(node));
    b=(node *) malloc(sizeof(node));
    c=(node *) malloc(sizeof(node));
    d=(node *) malloc(sizeof(node));
    e=(node *) malloc(sizeof(node));

    start=a;

    a->info=100;
    a->link=b;

    b->info=200;
    b->link=c;

    c->info=300;
    c->link=d;

    d->info=400;
    d->link=e;

    e->info=500;
    e->link=NULL;

    printf("address of first node: %d\n",a);
  while(start!=NULL)
    {
        printf("info: %d, next link: %d\n",start->info,start->link);
        start=start->link;
    }


    return 0;

}
