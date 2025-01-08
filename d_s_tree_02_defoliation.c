#include<stdio.h>
#include<stdlib.h>
typedef struct BST
{
    int data;
    struct BST *left;
    struct BST *right;

}node;
node *root,*temp,*ttemp,*p,*q,*s;

void init()
{
    root=temp=ttemp=p=q=s=NULL;
}


void create_root(int val)
{
    root=(node*)malloc(sizeof(node));
    root->data=val;
    root->left=NULL;
    root->right=NULL; 
}

void add_nodes(int val)
{
    temp=root;
    while(temp!=NULL)
    {
        ttemp=temp;
        if(temp->data>val)
        {
            temp=temp->left;
        }
        else{
            temp=temp->right;
        }
    }
    p=(node*)malloc(sizeof(node));
    p->data=val;
    p->left=NULL;
    p->right=NULL;

    if(ttemp->data>val)
    {
        ttemp->left=p;
    }
    else{
        ttemp->right=p;
    }
}

void parent_find(int val)
 {
    temp=root;
    while(temp->data!=val)
    {
        ttemp=temp;
      if(temp->data>val)
      {
        temp=temp->left;
      }
      else{
        temp=temp->right;
      }

    }
 }

void difoliation(node *temp)
{
    if(temp==NULL)
    {
        return ;
    }
    if(temp->left!=NULL||temp->right!=NULL)
     {
        
        if(temp->left==NULL)
        {
    
            //printf("return%d ",temp->data);
    
            difoliation(temp->right);
        }
        else
        {
            //printf("else1%d ",temp->data);
            difoliation(temp->left);
        }
        if(temp->right==NULL)
        {
           // printf("return2 ");
            return;
        }
        else
        {
            
            //printf("else2 %d ",temp->data);
            difoliation(temp->right);
            return;
        }
     }


 else{
      
        //printf(" free%d ",temp->data);
        parent_find(temp->data);
        if(ttemp->left==temp)
        {
            ttemp->left=NULL;
        }
        else{
            {
                ttemp->right=NULL;
            }
        }
        free(temp);
        return  ;
     }

    
    
}


void display_in(node *p)
{
    if(p!=NULL)
    {
    display_in(p->left);
    printf("%d ",p->data);
    display_in(p->right);
    
    }
    

}
void display_pre(node *p)
{
    if(p!=NULL)
    {
    printf("%d ",p->data);
    display_pre(p->left);
    display_pre(p->right);
    }
}
void display_post(node *p)
{
    if(p!=NULL)
    display_post(p->left);
    display_post(p->right);
   printf("%d ",p->data);
}

int main()
{
        init();
    create_root(90);
    add_nodes(80);
    add_nodes(75);
    add_nodes(85);
    add_nodes(50);
    add_nodes(110);
    add_nodes(95);
    add_nodes(180);
    add_nodes(250);
    add_nodes(160);
    add_nodes(150);

    printf("Inorder Traversal of Tree is : \n");
    display_in(root);

    printf("\n");

    printf("Your updated tree is : \n");
    difoliation(root);
    printf("\n");
    display_in(root);

    printf("\n");

   // printf("%dhi",root->data);

    return 0;
}