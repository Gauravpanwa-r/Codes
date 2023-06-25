#include <iostream>
using namespace std;
struct node{
    int data;
    struct node *prev,*next;
}*head;
void display(struct node*p)
{
    while(p->next)
    {
        cout<<p->data<<" ";
        p=p->next;
    }
    cout<<endl;
}
void InsertionAtPos(struct node *p,int pos,int data)
{
    struct node *temp = new node;
    temp->data=data;
    if(pos==1)
    {
        temp->prev=NULL;
        temp->next=p;
        p->prev=temp;
        head=temp;
    }
    else
    {
        for(int i=1;i<pos-1;i++)
        p=p->next;

        temp->next=p->next;
        p->next->prev=temp;
        p->next=temp;
        temp->prev=p;

    }
    display(head);
}
void createDoubly(int arr[],int n)
{
    struct node *temp,*last;
    head=new node;
    head->data=arr[0];
    head->next=NULL;
    head->prev=NULL;
    last=head;
    for(int i=1;i<=n;i++)
    {
        temp = new node;
        temp->data=arr[i];
        temp->prev=last;
        temp->next=NULL;
        last->next=temp;
        last=temp;
    }
    display(head);
}
int main()
{
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    int choice,pos,data;
    while(1){
    cout<<"1.Create a linked list\n2.Inserting node at any position\n3.Delete a node in linked list\n6.Exit\n";
    cin>>choice;
    switch (choice)
    {
    case 1:
        createDoubly(arr,10);
        break;
    case 2:
        cout<<"Enter at which positon you want tp insert a node :";
        cin>>pos;
        cout<<"Enter the element that you want to enter in linked list :";
        cin>>data;
        InsertionAtPos(head,pos,data);
        break;
    case 6:
        exit(0);    
    }
    }
}