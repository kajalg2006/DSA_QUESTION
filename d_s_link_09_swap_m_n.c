#include<stdio.h>
#include<stdlib.h>

typedef struct linked_list{
    int data;
    struct linked_list *next;
}node;
node *temp,*first,*ttemp,*p,*q,*r,*s;

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
void swap_m_n(int x,int y)
{    //nishu
    // temp = first;
    // ttemp=first;
    // while(temp->data!=x)
    // {
    //    p=temp;//200
    //   temp= temp->next;//300

    // }
    //   while(ttemp->data!=y)
    // {
    //    q=ttemp;//600
    //   ttemp= ttemp->next;//700

    // }
    // r=temp->next;
    // s=ttemp->next;
    // temp->next=s;
    // p->next=ttemp;
    // q->next=temp;
    // ttemp->next=r;



    //   temp = first;
    //  ttemp=first;

    // while(temp->data!=x)
    // {
    //    p=temp;//200
    //   temp= temp->next;//300

    // }
    //   while(ttemp->data!=y)
    // {
    //    q=ttemp;//600
    //   ttemp= ttemp->next;//700

    // }
    // r=temp->next;
    // s=ttemp->next;
    // temp->next=s;
    // p->next=ttemp;
    // q->next=temp;
    // ttemp->next=r;


















//kajal
    temp = first;
    p =first;
    int i=1;
    while( i != x){
        ttemp = temp;
        temp = temp->next;
  i++;
    }
int j =1;
    while( j != y){
        q  = p;
        p = p->next;
          j++;
    }

    ttemp->next = p;
     r = temp->next;
  temp->next = p->next;
  p->next = r;
  q->next = temp;




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
    int a;
    int b;
    create_first(10);
    add_nodes(20);
    add_nodes(30);
    add_nodes(40);
    add_nodes(50);
    add_nodes(60);
    add_nodes(70);
    display();

    printf("Enter two data which you want to swap\n\n");
    scanf("%d",&a);
    scanf("%d",&b);


    printf("Update linked list is \n\n");
    swap_m_n(a,b);

    display();
    return 0;
}