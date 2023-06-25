#include <bits/stdc++.h>
using namespace std;
struct node 
{
    int data;
    struct node *next;
}*front,*rear;
void display(struct node *p)
{
    while(p)
    {
        cout<<p->data<<" ";
        p = p->next;
    }
    cout<<endl;
}
void enqueue(int x)
{
    struct node *temp;
    temp = new node;
    temp->data = x;
    temp->next = NULL;
    if(temp == NULL)
    cout<<"Queue is Full\n";
    else
    {    if(front == NULL)
        {
            front = rear = temp;
        }
        else
        {
            rear->next = temp;
            rear = temp;
        }
    }
}
int dequeue()
{
    int x= -1;
    struct node *p = front;
    if(front == NULL)
    cout<<"Queue is Empty\n";
    else
    {
        front = front->next;
        x = p->data;
        delete[]p;
    }
    return x;
}
int peek()
{
    if(front == NULL)
    return -1;

    return front->data;
}
bool IsEmpty()
{
    if(front == NULL)
    return true;
    
    return false;
}
bool IsFull()
{
    struct node *temp = new node;
    if(temp == NULL)
    return true;
    
    return false;
}
int main()
{
    int choice,data;
    front = rear = NULL;
    while(1)
    {   cout<<"1.Enqueue\n2.Dequeue\n3.peek\n4.IsEmpty\n5.IsFull\n6.Display\n8.Exit\n";
        cin>>choice;
        switch(choice)
        {
            case 1:
            cout<<"Enter the data that you want to enqueue:";
            cin>>data;
            enqueue(data);
            break;
            case 2:
            cout<<dequeue()<<endl;
            break;
            case 3:
            cout<<peek()<<endl;
            break;
            case 4:
            if(IsEmpty)
            cout<<"Queue is Empty\n";
            else
            cout<<"Queue is not Empty\n";
            break;
            case 5:
            if(IsFull)
            cout<<"Queue is Full\n";
            else
            cout<<"Queue is not Full\n";
            break;
            case 6:
            display(front);
            break;
            case 8:
            exit(0);
        }
    }
}
