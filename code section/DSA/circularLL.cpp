#include <bits/stdc++.h>
using namespace std;
struct node{
    int data;
    struct node *next;
}*first;
void circularLL(struct node *p)
{
    while(p->next!=NULL)
    p=p->next;
    
    p->next=first;
}
void display(struct node *p)
{
    do{
        cout<<p->data<<" ";
        p=p->next;
    }while(p!=first);
    cout<<"\n";
}
int count(struct node *p)
{
    int cnt=0;
    while(p->next!=NULL)
    {
        cnt++;
        p=p->next;
    }
}
void create(int arr[],int n)
{
    struct node *temp,*last;
    temp = new node;
    temp->data = arr[0];
    temp->next = NULL;
    first = last = temp;
    for(int i=1;i<n;i++)
    {
        temp = new node;
        temp->data = arr[i];
        temp->next = NULL;
        last->next = temp;
        last = temp;
    }
    display(first);
}
void InsertionAtPos(struct node *p,int data,int pos)
{
    struct node *temp,*t;
    temp = new node;
    temp->data=data;
    if(pos == 1)
    {
         int flag = 0;
        p=p->next;
        while(p!=first||flag==0)
        {
            if(p->next==first)
            flag=1;
            t=p;
            p=p->next;
        }
        t->next=temp;
        temp->next=p;
        first = temp;
    }
    else
    {
        int i=1;
        while(i++<pos-1){
        p=p->next;
        }
        temp->next=p->next;
        p->next=temp;
    }
    display(first);
}
int main()
{
    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    int data,pos;
    create(arr,10);
    circularLL(first);
    cout<<"Enter data of new node:";
    cin>>data;
    cout<<"Enter Position at which you want to insert the element:";
    cin>>pos;
    InsertionAtPos(first,data,pos);
}