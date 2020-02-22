#include<stdio.h>
#include<stdlib.h>
struct node
{
int info;
node *link;
};

int main()
{
node *first, *start,*print,*pre,*i,*j,*sortt,*locp,*head;

first = (node *)malloc(sizeof(node));
pre = (node *)malloc(sizeof(node));
pre->info=NULL;

start = first;
print=first;
sortt=first;
locp=first;
head=first;

printf("Enter element:");

while(1)
{
scanf("%d",&first->info);
if(first->info==0)
break;
node *next = (node *)malloc(sizeof(node));
first->link = next;
next->link = NULL;
first = next;
}

int temp;
for(i=sortt;i->link!=NULL;i=i->link)
{
for(j=i->link;j->info!=NULL;j=j->link)
{
if(i->info>j->info)
{
temp=i->info;
i->info=j->info;
j->info=temp;
}
}
}

printf("\nSorted element:\n");

while(print!=NULL)

{
if(print->info==0)
break;
printf("%d ",print->info);
print=print->link;
}

node *neww=(node *)malloc(sizeof(node));
neww->link=NULL;
printf("\n\nEnter new item:");
scanf("%d",&neww->info);

while(start!=NULL)
{
if(neww->info<head->info)
{
neww->link=start;
print=neww;
break;
}
else if (neww->info<start->info)
{
while(head!=NULL)
{
if(head->link==start)
{
locp=head;
break;
}
head=head->link;
}

neww->link=locp->link;
locp->link=neww;
break;
}
else if(start->info==0)
{

while(head!=NULL)
{
if(head->link==start)
{
locp=head;
break;
}
head=head->link;
}

neww->link=locp->link;
locp->link=neww;
break;
}
start=start->link;
}

printf("\nUpdated list:\n");

while(print!=NULL)

{
if(print->info==0)
break;
printf("%d ",print->info);
print=print->link;
}

return 0;
}
