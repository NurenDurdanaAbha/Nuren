#include<stdio.h>
#include<stdlib.h>

struct node
{
    int info;
    node *link;
};
int main()
{

    node *start,*first,*loc=NULL,*insertt,*nexxt;
    first=(node *)malloc(sizeof(node));
    start=first;
    insertt= first;
    //nexxt = first;
    printf("Enter Numbers to insert in Linked List, 0 to stop: ");
    while(1)
    {
        scanf("%d",&first->info);
        if(first->info==0)
            break;

        printf("%d Stored at: %d\n",first->info,first);
        node *next = (node *)malloc(sizeof(node));
        first->link=NULL;
        first->link = next;
        first=next;
    }
    printf("\nEnter Key to search: ");
    int item;
    scanf("%d",&item);
   // node *nexxt;
    while(start !=NULL)
    {
        //printf("Present Address: %d, info = %d, Next Link = %d\n",start, start->info,start->link);
        if(start->info==item)
        {
            loc=start;
            nexxt = loc->link;
            break;
        }
        start = start->link;
    }
    printf("%d\n",nexxt);
    node *neww = (node*)malloc(sizeof(node));
    printf("Enter new item: ");
    scanf("%d",&neww->info);
    neww->link = NULL;

    loc->link = neww;
    neww->link = nexxt;;

    while(insertt != NULL)
    {
       if(insertt->info==0)
            break;
        printf("INFO= %d\n",insertt->info);
        insertt =  insertt->link;
    }
    return 0;
}
