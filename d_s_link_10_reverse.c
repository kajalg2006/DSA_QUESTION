#include<stdio.h>
#include<stdlib.h>

typedef struct linked_list{
    int data;
    struct linked_list *next;
}node;
node *temp,*first,*ttemp,*p,*q,*r,*s,*ptr;

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

// void reverse()
// {
//     int count=0;
//     temp=first;
//     while(temp->next!=NULL)
//     {
//         ptr=temp;
//        // printf("%u ",temp);
//          temp=temp->next;
//         //printf("%d",&ptr);
//         printf("\n");
//         ptr=ptr+1;
//         if(temp->next==NULL)
//         {
//             ptr--;
//         }
//         count++;
//     }
//     ttemp=temp;
    

// while(temp!=first)
//  {

//    temp->next=ptr;
//     temp=temp->next;
//    ptr--;

//     }
//     first->next=NULL;
//     free(temp);
//     first=ttemp;
// }
void reverse()
{
    temp=first;
    p=temp->next;//200
    r=temp;//100
      first->next=NULL;//100->next=null
  

    while(p != NULL)
    {

       q=p;//200
        p=p->next;
        q->next=r;
        r=q;
        
    }
    first=r;


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
node *findKthFromLast(node *head, int k)
{
	//Write your Code Here
	//node *first=head;
	//node *temp,*ttemp=first;
	//int count=0;
    temp=first;
   int count=0;

	while(count<k)
	{
	 ttemp=temp;
     temp =temp->next;
   //  printf("%d ",ttemp->data);
	 count++;
	}
	//printf("%d",(ttemp->data);
	return ttemp;
    }

int main()
{
    int a;
    int b;
    int k=1;
    
    create_first(10);
    add_nodes(20);
    add_nodes(30);
    add_nodes(40);
    add_nodes(50);
    add_nodes(60);
    add_nodes(70);
    printf("Linked list is :\n");
    display();
    reverse();
    printf("Update link list is : \n ");
    display();
    p= findKthFromLast(first, k);
    printf("%d",p->data);
    return 0;
}