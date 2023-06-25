#include <bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    struct node *lchild = NULL, *rchild = NULL;
};
struct node *create()
{
    struct node *temp;
    int x;
    temp = new node;
    cout << "Enter data of new node(-1 for no new node):";
    cin >> x;
    if (x == -1)
        return NULL;
    temp->data = x;
    cout << "Enter left child of node having data " << x << endl;
    temp->lchild = create();
    cout << "Enter right child of node having data " << x << endl;
    temp->rchild = create();

    return temp;
}
void insert(struct node *p, int key)
{
    struct node *t, *r;
    if (p == NULL)
    {
        p = new node;
        p->data = key;
        p->lchild = p->rchild = NULL;
    }
    else
    {
        while (p != NULL)
        {
            r = p;
            if (key == p->data)
                return;
            else if (key < p->data)
                p = p->lchild;
            else
                p = p->rchild;
        }
        t = new node;
        t->data = key;
        t->lchild = t->rchild = NULL;
        if (t->data < r->data)
            r->lchild = t;
        else
            r->rchild = t;
    }
}
struct node *rinsert(struct node *p, int key)
{
    if (p == NULL)
    {
        struct node *temp = new node;
        temp->data = key;
        temp->lchild = temp->rchild = NULL;
        return temp;
    }
    if (key < p->data)
    {
        p->lchild = rinsert(p->lchild, key);
    }
    else if (key > p->data)
    {
        p->rchild = rinsert(p->rchild, key);
    }
    return p;
}
void preorder(struct node *p)
{
    if (p)
    {
        cout << p->data << " ";
        preorder(p->lchild);
        preorder(p->rchild);
    }
    cout << endl;
}
void inorder(struct node *p)
{
    if (p)
    {
        inorder(p->lchild);
        cout << p->data << " ";
        inorder(p->rchild);
    }
    cout << endl;
}
void postorder(struct node *p)
{
    if (p)
    {
        postorder(p->lchild);
        postorder(p->rchild);
        cout << p->data << " ";
    }
    cout << endl;
}
int Height(struct node *p)
{
    int x = 0, y = 0;

    if (p == NULL)
        return 0;

    x = Height(p->lchild);
    y = Height(p->rchild);

    return x > y ? +1 : y + 1;
}
struct node *inpre(struct node *p)
{
    while (p && p->rchild)
        p = p->rchild;

    return p;
}

struct node *insuc(struct node *p)
{
    while (p && p->lchild)
        p = p->lchild;

    return p;
}

struct node *Delete(struct node *p, int key)
{
    static struct node *t = p;
    struct node *q;
    if (p == NULL)
        return NULL;

    if (p->rchild == NULL && p->lchild == NULL)
    {
        if (t == p)
        {
            t == NULL;
        }
        delete p;
        return NULL;
    }

    if (key < p->data)
        p->lchild = Delete(p->lchild, key);

    else if (key > p->data)
        p->rchild = Delete(p->rchild, key);

    else
    {
        if (Height(p->lchild) > Height(p->rchild))
        {
            q = inpre(p->lchild);
            p->data = q->data;
            p->lchild = Delete(p->lchild, q->data);
        }
        else
        {
            q = insuc(p->rchild);
            p->data = q->data;
            p->rchild = Delete(p->rchild, q->data);
        }
    }
    return p;
}

int main()
{
    struct node *root;
    int key, choice;
    root = create();
    preorder(root);
    inorder(root);
    postorder(root);
    while (1)
    {
        cout << "1.Insert\n2.Delete\n";
        cin >> choice;
        switch (choice)
        {
        case 1:
            cout << "Enter the value that you want to insert:";
            cin >> key;
            root = rinsert(root, key);
            inorder(root);
            break;
        case 2:
            cout << "Enter the value that you want to delete:";
            cin >> key;
            Delete(root,key);
            inorder(root);
            break;
        }
    }
    return 0;
}