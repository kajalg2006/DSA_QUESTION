#include <iostream>
using namespace std;
typedef struct Tree
{
    int data;
    Tree *left, *right, *parent;
} T;

T *root, *temp, *ttemp, *p, *s;

void init()
{
    root = temp = ttemp = p = NULL;
}
void create_root(int val)
{
    root = new T;
    root->data = val;
    root->left = root->right = root->parent = NULL;
}
void add_nodes(int val)
{
    temp = root;
    while (temp != NULL)
    {
        p = temp;
        if (temp->data > val)
            temp = temp->left;
        else
            temp = temp->right;
    }

    // cout<<temp->data;

    ttemp = new T;
    ttemp->data = val;
    ttemp->left = ttemp->right = NULL;
    ttemp->parent = p;
    //  8cout<< temp->data;

    if (p->data > val)
        p->left = ttemp;
    else
        p->right = ttemp;
}

void inorder(T *p)
{
    // cout<<"hello";
    if (p != NULL)
    {
        inorder(p->left);
        cout << p->data << " ";
        inorder(p->right);
    }
}

void postorder(T *p)
{
    if (p != NULL)
    {
        postorder(p->left);
        postorder(p->right);
        cout << p->data << " ";
    }
}

void preorder(T *p)
{
    if (p != NULL)
    {
        cout << p->data << " ";
        preorder(p->left);
        preorder(p->right);
    }
}
// DELETING THE NODE
void delete_node(int val)
{
    temp = root;
    while (temp->data != val)
    {
        if (temp->data > val)
        {
            temp = temp->left;
        }
        else
        {
            temp = temp->right;
        }
    }

    // CASE 4
    ttemp = temp->parent;
    // cout<<ttemp->data;
    if (temp->left != NULL && temp->right != NULL)
    {
        s = temp->right;
        while (s->left != NULL)
        {
            ttemp = s;
            s = s->left;
        }
        temp->data = s->data;
        temp = s;
    }
    // CASE 1
    // ttemp = temp->parent;
    if (temp->left == NULL && temp->right == NULL)
    {

        if (ttemp->left == temp)
        {
            ttemp->left = NULL;
        }
        else
        {
            ttemp->right = NULL;
        }
        delete (temp);
    }
    // CASE 2
    else if (temp->left != NULL && temp->right == NULL)
    {
        if (ttemp->left == temp)
        {
            ttemp->left = temp->left;
        }
        else
        {
            ttemp->right = temp->left;
        }
        temp->left = NULL;
        delete (temp);
    }
    // CASE 3
    else if (temp->left == NULL && temp->right != NULL)
    {
        if (ttemp->left == temp)
            ttemp->left = temp->right;

        else
        {

            ttemp->right = temp->right;
        }
        temp->right = NULL;
        delete (temp);
    }

    else
    {
        cout << "data not found";
    }
}

int main()
{
    create_root(10);
    // cout<<root->data;
    add_nodes(20);
    add_nodes(35);
    add_nodes(30);
    add_nodes(5);
    add_nodes(80);
    add_nodes(90);
    add_nodes(70);

    inorder(root);
    cout << "\n";
    postorder(root);
    cout << "\n";
    preorder(root);

    int data;
    cout << "\nEnter the data to delete" << endl;
    cin >> data;
    delete_node(data);

    inorder(root);
    return 0;
}