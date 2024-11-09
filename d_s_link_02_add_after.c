#include<stdio.h>
#include<stdlib.h>

typedef struct linked_list
{
    int data ;
    struct linked_list *next;
}node ;

node *temp,*ttemp,*p,*first;

void create_first(int value)
{
    first=(node*)malloc(sizeof (node));
    first->data = value;
    first->next=NULL;
}

void add_nodes(int value)
{
    temp=first;
    while(temp->next!=NULL)
    {
        temp = temp->next;
    }
    ttemp=(node*)malloc(sizeof (node));
    ttemp->data=value;
    ttemp->next=NULL;
    temp->next=ttemp;
}

void add_after(int a, int x)
{
    temp=first;
    while(temp->data!=a)
    {
        temp=temp->next;
    }
    ttemp=(node*)malloc(sizeof (node));
    ttemp->data=x;
    p=temp->next;
    ttemp->next=p;
    temp->next=ttemp;
}

void display()
{
    temp = first;
    while(temp!=NULL)
    {
        printf("%d ",temp->data);
        temp=temp->next;
    }
    printf("\n");
}
int main()
{
    int x;
    int a;
    printf("linked list is : \n");
    create_first(10);
    add_nodes(20);
    add_nodes(30);
    add_nodes(40);
    add_nodes(50);
    add_nodes(60);
    add_nodes(70);
    display();

    printf("Enter the value where you want to add after\n ");
    scanf("%d",&a);//after value = a

     printf("Enter the value which you want to add\n ");
    scanf("%d",&x);//data = x
    add_after(a,x);
    display();



    return 0;
}