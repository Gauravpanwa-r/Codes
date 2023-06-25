#include <bits/stdc++.h>
using namespace std;
struct node{
    int data;
    struct node *next;
}*first;
void display()
{
    struct node *p = first;
    while(p)
    {
        cout<<p->data<<" ";
        p = p->next;
    }
    cout<<endl;
}
void createLL()
{
    struct node *p = first,*temp,*last;
    int n;
    cout<<"Enter length of linked list :";
    cin>>n;
    n--;
    temp = new node;
    cout<<"Enter data in node :";
    cin>>temp->data;
    temp->next = NULL;
    first = last = temp;   
    while(n--)
    {
        temp = new node;
        cout<<"Enter data in node :";
        cin>>temp->data;
        temp->next = NULL;
        last->next = temp;
        last = temp;
    }
    cout<<endl;
}
void InsertAtPos()
{
    struct node *temp = new node ,*p = first;
    int pos;
    cout<<"Enter the position at which you want to enter the data :";
    cin>>pos;
    cout<<"Enter data :";
    cin>>temp->data;
    if(pos == 1)
    {
        temp->next = first;
        first = temp;
    }
    else
    {
        pos-=2;
        while(pos--)
        p = p->next;
        
        temp->next = p->next;
        p->next = temp;
    }
    display();
}
void reverse()
{
    struct node *a,*b,*c,*p = first;
    a = first;
    b = c = NULL;
    while(a)
    {
        c = b;
        b = a;
        a = a->next;
        b->next = c;
    }
    first = b;
    display();
}
void Delete()
{
    struct node*p = first;
    int pos;
    cout<<"Enter the position at which you want to delete the node :";
    cin>>pos;
    if(pos == 1)
    {
        first = first->next;
        p = NULL;
        delete[]p;
    }
    else
    {
        pos-=2;
        while(pos--)
        p = p->next;
        
        p->next = p->next->next;
        p = p->next;
        p = NULL;
        delete[]p;
    }
    display();
}
int main()
{
    createLL();
    display();
    while(1)
    {
        int choice;
        cout<<"1.insert\n2.delete\n3.reverse\n8.exit\n";
        cin>>choice;
        switch(choice)
        {
            case 1:
            InsertAtPos();
            break;
            case 2:
            Delete();
            break;
            case 3:
            reverse();
            case 8:
            return 0;
        }
    }
    return 0;
}