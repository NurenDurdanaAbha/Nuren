#include<stdio.h>
#include<stdlib.h>
struct node
{
    int info;
    node *link;
};

int main()
{
    node *head,*next,*start;
    int i;
    head=(node *)malloc(sizeof(node));
    start=head;

    while(1)
    {
        scanf("%d",&head->info);
        if(head->info==0)
           {
               head->link=NULL;
               break;
           }
        next=(node *)malloc(sizeof(node));
        head->link=next;
        head=next;
    }
    i=1;
    while(start!=NULL)
    {
        printf("\n\nAddress %d : %d",i,start);
        printf("\nInfo %d : %d",i,start->info);
        printf("\nLink of next node  %d : %d",i,start->link);
        start=start->link;
        i++;
    }
    return 0;
}
