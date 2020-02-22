#include<stdio.h>
#include<stdlib.h>

struct node
{
    int info;
    node *link;
};

int main()
{
    int item;
    node *start, *first, *loc=NULL, *next;

    first = (node *) malloc(sizeof(node));

    start=first;

    printf("Enter numbers to insert in linked list, 0 to stop:");

    while(1)
    {
        scanf("%d",&first->info);
        printf("%d stored of: %d\n",first->info,first);

        if(first->info==0)
            break;

        next = (node *) malloc(sizeof(node));

        next->link=NULL;
        first->link=next;

        first=next;
    }

    scanf("%d",&item);

    while(start!=NULL)
    {
        if(start->info==item)
        {
            loc=start;
            break;
        }

        start = start->link;
    }

    if(loc==NULL)
        printf("DATA NOT FOUND\n");
    else
        printf("\n\n%d found at loc: %d\n",item,loc);

    return 0;
}
