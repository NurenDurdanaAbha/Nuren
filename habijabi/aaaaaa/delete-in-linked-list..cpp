#include<stdio.h>
#include<stdlib.h>

struct node
{
    int info;
    node *link;
};

int main()
{
    node *previous=NULL,*first,*head=NULL,*delet,*start;
    first = (node*)malloc(sizeof(node));
    head = first;
   // delet = first;
    start = first;

    while(1)
    {
        scanf("%d",&first->info);
        if(first->info==0)
            break;
            printf("%d Stored at: %d\n",first->info,first);
        node *next = (node*)malloc(sizeof(node));
        next->link = NULL;
        first->link = next;
        first = next;
    }


    int item,flag=0;
    printf("Enter the delete the number: ");
    scanf("%d",&item);

    while(start != NULL)
    {
        if(start->info == item)
        {
            if(previous==NULL)
            {
                head = start->link;
            }
            else
            {
                previous->link = start->link;
            }
            printf("%d is deletd form list\n",item);
            flag=1;
            break;

        }
        previous = start;
        start = start->link;
    }
     printf("%d\n%d\n%d\n",head,start,previous);
    if(flag==0)
        printf("%d is not found.\n");

    while(head!=NULL)
    {
        if(head->info==0)
            break;
        printf("%d\n",head->info);
        head = head->link;
    }
    return 0;
}
