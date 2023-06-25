#include <bits/stdc++.h>
using namespace std;
struct Deque
{
    int front;
    int rear;
    int size;
    int *s;
};
void display(struct Deque *d)
{
    int i = d->front;
    while(i!=d->rear)
    {
        cout<<d->s[i]<<" ";
        i=(i+1)%d->size;
    }
    cout<<d->s[d->rear]<<endl;
}
void createdq(struct Deque *d)
{
    d->front = d->rear -1;
    cout<<"Enter the size of Deque:";
    cin>>d->size;
    d->s = new int[d->size * sizeof(int)];
}
void InsertionAtFront(struct Deque *d,int x)
{
    if((d->front == 0 && d->rear == d->size-1) || d->front == d->rear+1)
    {
        cout<<"Queue is Full\n";
    }
    else if(d->front == d->rear == -1)
    {
        d->front = d->rear = 0;
        d->s[d->front] = x;
    }
    else if(d->front == 0)
    {
        d->front = d->size-1;
        d->s[d->front] = x;
    }
    else
    {
        d->front -=1;
        d->s[d->front] = x;
    }
}
void InsertionAtRear(struct Deque *d,int x)
{
    if((d->front == 0 && d->rear == d->size-1) || d->front == d->rear+1)
    {
        cout<<"Queue is Full\n";
    }
    else if(d->front == d->rear == -1)
    {
        d->front = d->rear = 0;
        d->s[d->rear] = x;
    }
    else if(d->front == d->size-1)
    {
        d->rear = 0;
        d->s[d->rear] = x;
    }
    else
    {
        d->rear +=1;
        d->s[d->rear] = x;
    }
}
int DeletionAtFront(struct Deque *d)
{
    int x = -1;
    if(d->front == d->rear == -1)
    return -1;
    else if(d->front == d->rear)
    {
        d->front = d->rear = -1;
        return -1;
    }
    else if(d->front == d->size-1)
    {
        x = d->s[d->front];
        d->front = 0;
    }
    else
    {
        x = d->s[d->front];
        d->front++;
    }
    return x;
}
int DeletionAtRear(struct Deque *d)
{
    int x = -1;
    if(d->front == d->rear == -1)
    return -1;
    else if(d->front == d->rear)
    {
        d->front = d->rear = -1;
        return -1;
    }
    else if(d->rear == 0)
    {
        x = d->s[d->rear];
        d->rear = d->size-1;
    }
    else
    {
        x = d->s[d->rear];
        d->rear--;
    }
    return x;
}

int main()
{
    struct Deque d;
    int data;
    createdq(&d);
    while(1)
    {
        int choice;
        cout<<"1.Insertion at front\n2.Insertion at rear\n3.Deletion at front\n4.Deletion at rear\n5.Display\n6.Exit\n";
        cin>>choice;
        switch(choice)
        {
            case 1:
            cout<<"Enter the data that you want to insert\n";
            cin>>data;
            InsertionAtFront(&d,data);
            break;
            case 2:
            cout<<"Enter the data that you want to insert\n";
            cin>>data;
            InsertionAtRear(&d,data);
            break;
            case 3:
            if(DeletionAtFront(&d)==-1)
            cout<<"Queue is Empty\n";
            else
            cout<<DeletionAtFront(&d);
            break;
            case 4:
            if(DeletionAtFront(&d)==-1)
            cout<<"Queue is full\n";
            else
            cout<<DeletionAtRear(&d);
            break;
            case 5:
            display(&d);
            break;
            case 6:
            return 0;
        }
    }
}