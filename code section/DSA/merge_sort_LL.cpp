#include <iostream>
using namespace std;
struct node{
    int data;
    struct node *next;
}*head;
void display(struct node *p)
{
    while(p)
    {
        cout<<p->data<<" ";
        p=p->next;
    }
    cout<<endl;
}
void createLL1(int arr[],int n)
{
    struct node*last=NULL,*temp;
    temp=new node;
    temp->data=arr[0];
    temp->next=NULL;
    head=last=temp;
    for(int i=1;i<n;i++)
    {
        temp=new node;
        temp->data=arr[i];
        temp->next=NULL;
        last->next=temp;
        last=temp;
    }
}
struct node *findMid(struct node *p)
{
    struct node *slow,*fast;
    slow=p;
    fast=p->next;
    while(fast && fast->next)
    {
        slow=slow->next;
        fast=fast->next->next;
    }
    return slow;
}
struct node *merge(struct node *p,struct node *q)
{
    struct node *last=NULL;
    if(p==NULL)
    return q;
    if(q==NULL)
    return p;
    struct node *ans=new node;
    last = ans;
    while(p && q)
    {
        if(p->data<q->data)
        {
            last->next=p;
            last=p;
            p=p->next;
        }
        else
        {
            last->next=q;
            last=q;
            q=q->next;
        }
    }
    if(p)last->next=p;
    if(q)last->next=q;
    return ans;
}
struct node *merge_sort(struct node *head)
{
    if(head && head->next)
    return head;
    
    struct node *mid=findMid(head),*left,*right;
    left=head;
    right=mid->next;
    mid->next=NULL;
    left=merge_sort(left);
    right=merge_sort(right);
    struct node *result=merge(left,right);
    return result;
}
int main()
{
    int arr1[10]={29,21,23,31,11,22,90,53,9,1};
    createLL1(arr1,10);
    struct node *res = merge_sort(head);
    display(res);
    return 0;
}