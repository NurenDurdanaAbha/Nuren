#include<stdio.h>
#include<stdlib.h>

struct node
{
    int info;
    node *link;
};

int main()
{
    node *start,*first,*loc, *avail,*NEW,*nexxt,*print,*locp=NULL;
    int ITEM,locc;

    //create:
    first=(node *)malloc(sizeof(node));
    start=first;
    print=first;
    loc=first;

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

    scanf("%d",&ITEM);

    while(loc!=NULL)
    {
      if(loc->info==ITEM)
        {
    //1.
        if(locp==NULL)
        {
            start=start->link;
        }
        else
        {
            locp->link=loc->link;
        }
        break;
        }
      else
        {
            locp=loc;
            loc=loc->link;
        }
    }

//print out:
    while(print!=NULL)
    {
        if(print->info==0)
            break;
        printf("\nINFO=%d",print->info);
        print=print->link;
    }



    return 0;
}
