#include <bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    struct node *lchild, *rchild;
} *root;
struct qnode
{
    struct node *q;
    struct qnode *next, *front = NULL, *rear = NULL;
};
void enqueue(struct qnode *q, struct node *p)
{
    struct qnode *temp;
    if (q->front == q->rear == 0)
    {
        temp = new qnode;
        temp->q = p;
        temp->next = NULL;
        q->front = q->rear = temp;
    }
    else
    {
        temp = new qnode;
        temp->q = p;
        temp->next = NULL;
        q->rear->next = temp;
        q->rear = temp;
    }
}
struct node *dequeue(struct qnode *q)
{
    struct node *p;
    struct qnode *pt;
    if (q->front == q->rear == 0)
        return NULL;
    else
    {
        p = q->front->q;
        pt = q->front;
        q->front = q->front->next;
        delete pt;
        return p;
    }
}
bool isempty(struct qnode *q)
{
    return q->rear == 0;
}
void preorder(struct node *p)
{
    if (p)
    {
        cout << p->data;
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
        cout << p->data;
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
        cout << p->data;
    }
    cout << endl;
}
void treecreate()
{
    struct qnode *q;
    struct node *t, *p;
    int x;
    cout << "Enter root node data:";
    cin >> x;
    root = new node;
    root->data = x;
    root->lchild = root->rchild = NULL;
    enqueue(q, root);
    while (!isempty(q))
    {
        p = dequeue(q);
        cout << "Enter left child(-1 if left child not exist):";
        cin >> x;
        if (x != -1)
        {
            t = new node;
            t->lchild = t->rchild = NULL;
            t->data = x;
            p->lchild = t;
            enqueue(q, t);
        }
        cout << "Enter right child(-1 if right child not exist):";
        cin >> x;
        if (x != -1)
        {
            t = new node;
            t->lchild = t->rchild = NULL;
            t->data = x;
            p->rchild = t;
            enqueue(q, t);
        }
    }
}
int main()
{
    treecreate();
    preorder(root);
    inorder(root);
    postorder(root);
}