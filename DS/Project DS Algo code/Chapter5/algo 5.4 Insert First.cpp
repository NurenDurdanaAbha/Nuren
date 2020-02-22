#include<stdio.h>
#include<stdlib.h>

struct node
{
    int info;
    node *link;
};
int main()
{

    node *start,*first,*loc=NULL,*avail,*NEW;
    first=(node *)malloc(sizeof(node));
    start=first;
    printf("Enter Numbers to insert in Linked List, 0 to stop: ");
    while(1)
    {
        scanf("%d",&first->info);
        if(first->info==0)
            break;

        printf("%d Stored at: %d\n",first->info,first);

        node *next = (node *)malloc(sizeof(node));
        next->link=NULL;
        first->link = next;
        first=next;
    }

    int ITEM;
    scanf("%d",&ITEM);

    avail = (node *)malloc(sizeof(node));

    if(avail==NULL)
    {
        printf("OVERFLOW\n");
    }

    NEW=avail;
    avail=avail->link;

    NEW->info=ITEM;

    NEW->link = start;

    start=NEW;

    while(NEW!=NULL)
    {
        printf("%d\n",NEW->info);
        NEW=NEW->link;
    }

    return 0;
}
