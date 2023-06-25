#include <bits/stdc++.h>
using namespace std;
struct node{
    int data;
    struct node *next;
}*first;
int pop(struct node *p)
{
    int x=-1;
    if(p==NULL)
    return x;
    first = p->next;
    x=p->data;
    delete []p;
    return x;
}
void display(struct node *p)
{
    while(p!=NULL)
    {
        cout<<p->data<<" ";
        p=p->next;
    }
    cout<<"\n";
}
void push(struct node *p)
{
    struct node *temp;
    temp = new node;
    if(temp == NULL)
    cout<<"Stack is Full\n";
    else{
        cout<<"Enter data in new node :";
        cin>>temp->data;
        temp->next=p;
        first=temp;
    }
    display(first);
}
void createll(int arr[],int n)
{
    int i;
    first=new node;
    struct node *last,*t;
    first->data=arr[0];
    first->next=NULL;
    last=first;
    for(i=1;i<n;i++)
    {
        t=new node;
        t->data=arr[i]; 
        t->next=NULL;
        last->next=t;
        last=t;
    }
}
int main()
{
    int arr[]={1,2,3,4,5,6,7,8,9,10};
    int cs,vf;
    createll(arr,10);
    while(1){
    cout<<"1.Push\n2.Pop\n5.Exit\n";
    cin>>cs;
    switch(cs)
    {
        case 1:
        push(first);
        break;
        case 2:
        vf=pop(first);
        if(vf==-1)
        cout<<"Stack is empty\n";
        else
        cout<<vf<<endl;
        display(first);
        break;
        case 5:
        exit(0);
    }
    }
}