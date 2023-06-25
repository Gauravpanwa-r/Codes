#include <stdio.h>
#include <stdlib.h>
struct node{
    int data;
    struct node *next;
}*first;
void insertionAtPos(struct node *p,int pos)
{
    struct node *temp=(struct node *)malloc(sizeof(struct node));
    if(pos<=0 || pos>count(first));
    printf("Invalid position");
    printf("Enter the data in node of list:");
    scanf("%d",&temp->data);
    temp->next=NULL;
    if(pos==1)
    {
        temp->next=first;
        first=temp;
    }
    else{
        for(int i=1;i<pos-1;i++)
        p=p->next;
        
        temp->next=p->next;
        p->next=temp;
    }
    Rdisplay(first);
}
void delete(struct node *p,int pos)
{
    struct node *temp;
    int cnt=1;
    if(pos==1)
    {
        first=p->next;
        p->next=NULL;
        free(p);
        Rdisplay(first);
        return;
    }
    while(cnt<pos)
    {
        if(cnt==pos-1)
        temp=p;
        p=p->next;
        cnt++;
    }
    temp->next=p->next;
    p->next=NULL;
    free(p);
    display(first);
    printf("\n");
}
void createll(int arr[],int n)
{
    int i;
    first=(struct node *)malloc(sizeof(struct node));
    struct node *last,*t;
    first->data=arr[0];
    first->next=NULL;
    last=first;
    for(i=1;i<n;i++)
    {
        t=(struct node *)malloc(sizeof(struct node));
        t->data=arr[i]; 
        t->next=NULL;
        last->next=t;
        last=t;
    }
}
int addition()
{
    int sum=0;
    struct node *temp=first;
    while(temp!=NULL)
    {
        sum+=temp->data;
        temp=temp->next;
    }
    return sum;
}
int MaxElement(struct node *p)
{
    int max=p->data;
    while(p!=NULL)
    {
        if(max<p->data)
        max=p->data;
        p=p->next;
    }
    return max;
}
int count(struct node *p)
{
    int count =0;
    while(p!=0)
    {
        count++;
        p=p->next;
    }
    return count;
}
void Rdisplay(struct node *p)
{
    if(p==NULL)
    return NULL;
    printf("%d ",p->data);
    Rdisplay(p->next);
}
void display(struct node *p)
{
    while(p!=NULL)
    {
        printf("%d ",p->data);
        p=p->next;
    }
    printf("\n");
}
int LinearSearch(struct node *p,int key)
{
    int count=1;
    while(p!=NULL)
    {
        if(p->data==key)
        return count;
        p=p->next;
        count++;
    }
    return -1;
}
int LinearSearchImp(struct node *p,int key)
{
    struct node *temp=NULL;
    int cnt=1;
    while(p!=NULL)
    {
        if(key==p->data)
        {
            temp->next=p->next;
            p->next=first;
            first=p;
            return cnt;
        }
        cnt++;
        temp=p;
        p=p->next;
    }
}
int main()
{
    int pos,p,c,maxele,sum,key;
    int arr[]={2,5,8,400,6,10};
    display(first);
    createll(arr,6);
    display(first);
    int nodes = count(first);
    printf("Total nodes in linked list:%d\n",nodes);
    while(1){
    printf("1.Insert a node\n2.Delete a node\n3.Finding Max. Element\n4.Addition of data\n5.Linear Search\n6.Improved Linear Search\n7.Exit\n");
    scanf("%d",&c);
    switch(c)
    {
        case 1:
        printf("Enter at which position you want add a node:");
        scanf("%d",&pos);
        insertionAtPos(first,pos);
        break;
        case 2:
        printf("Enter the  at which you want to delete node:");
        scanf("%d",&pos);
        delete(first,pos);
        break;
        case 3:
        maxele=MaxElement(first);
        printf("The largest data in linked list:%d",maxele);
        break;
        case 4:
        sum=addition();
        printf("The sum of all the elements of list is:%d",sum);
        case 5:
        printf("Enter the element you want to search in Linked list:");
        scanf("%d",&key);
        p=LinearSearch(first,key);
        if(p==-1)
        printf("Element is not found\n");
        else
        printf("Element is found at %d node\n",p);
        break;
        case 6:
        printf("Enter the element you want to search in Linked list:");
        scanf("%d",&key);
        p=LinearSearchImp(first,key);
        if(p==-1)
        printf("Element not found\n");
        else
        printf("Element is found at %d node\n",p);
        case 10:
        exit(0);
    }
    }
    return 0;
}