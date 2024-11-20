#include <iostream>
using namespace std;

typedef struct DLL
{
    int data;
    struct DLL *prev;
    struct DLL *next;
}node;

node *first,*temp,*ttemp,*p,*q,*r,*s;

void create_first(int value)
{
    first =(node*)malloc(sizeof (node));
    first->data=value;
    first->next=NULL;
    first->prev=NULL;

}

void add_nodes(int value)
{
    temp=first;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    ttemp=(node*)malloc(sizeof (node));
    ttemp->next=NULL;
    ttemp->prev=temp;
    ttemp->data=value;
    temp->next=ttemp;
}
void display()
{
    temp=first;

    while(temp!=NULL)
    {
        cout<<temp->data<<endl;
        temp=temp->next;
    }
}

void add_node_2L(int n){
   temp =first;
   p = new node();
   while(temp->next != NULL){
    ttemp= temp;
    temp = temp->next;
   }
   p->data= n;
   p->prev = ttemp;
   p->next = temp;
   ttemp ->next =p;
   temp->prev = p;
}
int main(){
    int n;
    int val;
    int b;
    char x;
    char y;

    cout<<"\n\nEnter the data from which you want to create your linked list"<<endl;
    cin>>n;

    create_first(n);

   do{
    
    {
     cout<<"\nEnter the data for adding new node "<<endl;
     cin>>val;

     add_nodes(val);
     
     cout<<"Press 1  if you want to add more  data otherwise prss other key "<<endl;
     cin>>b;

    }
   }while(b==1);

   cout<<"Your linked list is :"<<endl;
   display();

   cout<<"\n\nPress 1 if you want to reverse the linked list otherwise press 0";
   cin>>b;
   int d;
   if(b==1)
   {
    //reverse();
    cin>> d;
    add_node_2L(d);
    cout<<"\nYour Reversed linked list is : "<<endl;
    display();
   }
    return 0;
}