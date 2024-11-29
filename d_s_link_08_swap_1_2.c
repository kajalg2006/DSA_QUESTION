#include<stdio.h>
#include<stdlib.h>

typedef struct linked_list{
    int data;
    struct linked_list *next;
}node;
node *temp,*first,*ttemp,*p,*q;

void create_first(int value)
{
    first=(node*)malloc(sizeof (node));
    first->data=value;
    first->next=NULL;
}
void add_nodes(int value)
{
    temp=first;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    ttemp=(node*)malloc(sizeof (node));
    ttemp->data=value;
    ttemp->next=NULL;
    temp->next=ttemp;
}               
void swap_first_second()
{
    temp=first;//1st
    p=temp->next;//2nd//200
    q=p->next;//3rd//
    temp->next=q;
    p->next=temp;
    
    first=p;

}

void display()
{
    temp=first;
    while(temp!=NULL)
    {
        printf("%d ",temp->data);
        temp=temp->next;
    }
    printf("\n");
}


int main()
{
    int b;
    int k=2;
    create_first(10);
    add_nodes(20);
    add_nodes(30);
    add_nodes(40);
    add_nodes(50);
    add_nodes(60);
    add_nodes(70);
    display();
  
    
    printf("Update linked list is \n\n");
    swap_first_second();
    display();

     p= findKthFromLast(first, k);
     
     printf("%d",p->data);
    return 0;
}