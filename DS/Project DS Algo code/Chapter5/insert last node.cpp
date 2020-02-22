#include<stdio.h>
#include<stdlib.h>

struct node
{
    int info;
    node *link;
};

int main()
{
    node *start,*first,*insert,*print,*temp;
    int ITEM;

    //create:
    first=(node *)malloc(sizeof(node));
    start=first;
    print=first;


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
        temp=first;
        first=next;
    }

    insert=(node *)malloc(sizeof(node));

    scanf("%d",&ITEM);
    insert->info=ITEM;
    insert->link=NULL;

    if(start==NULL)
    {
        start= insert;
        temp=insert;
    }
    else
    {
        temp->link=insert;
        temp=insert;
    }

    //print out:
    while(print!=NULL)
    {
        if(print->info==0)
            break;
        printf("\nINFO=%d\n",print->info);
        print=print->link;
    }




    return 0;
}
