#include <bits/stdc++.h>
using namespace std;
struct Queue
{
    int front;
    int rear;
    int size;
    int *s;
};
void display(struct Queue *q)
{
    for(int i=q->front;i<q->size;i++)
    cout<<q->s[i]<<" ";
    cout<<endl;
}
void createq(struct Queue *q,int size)
{
    q->front = q->rear = -1;
    q->size = size;
    q->s = new int[q->size*sizeof(int)];
    // cout<<"Enter elementss of queue:";
    // for (int i = 0; i < q->size; i++)
    // cin>>q->s[i];
}
void Enqueue(struct Queue *q,int x)
{
    if(q->front == -1)
    {
        q->front++;
        q->rear++;
        q->s[q->front] = x;
    }
    else
    {
        if(q->rear == q->size-1)
        cout<<"Queue is Full\n";
        else
        {
            q->rear++;
            q->s[q->rear] = x;
        }
    }
    display(q);
}
int Dequeue(struct Queue *q)
{
    int x = -1;
    if(q->rear == q->front)
    cout<<"Stack is Empty\n";
    else
    {
        q->front++;
        x = q->s[q->front];
    }
    display(q);
    return x;
}
int peek(struct Queue *q)
{
    if(q->front == q->rear)
    cout<<"Queue is Empty\n";
    else
    return q->s[q->front];
}
bool IsFull(struct Queue *q)
{
    if(q->rear == q->size-1)
    return true;
    else
    return false;
}
bool IsEmpty(struct Queue *q)
{
    if(q->front == q->rear)
    return true;
    else
    return false;
}
int main()
{
    struct Queue q;
    int size,choice,data;
    while(1)
    {
        cout<<"1.Create Queue\n2.Enqueue\n3.Dequeue\n4.Peek\n5.IsFull\n6.IsEmpty\n8.Exit\n";
        cin>>choice;
        switch(choice)
        {
            case 1:
            cout<<"Enter the size of queue :";
            cin>>size;
            createq(&q,size);
            break;
            case 2:
            cout<<"Enter data that you want to insert in queue :";
            cin>>data;
            Enqueue(&q,data);
            break;
            case 3:
            cout<<Dequeue(&q)<<endl;
            break;
            case 4:
            cout<<peek(&q);
            break;
            case 5:
            if(IsFull(&q))
            cout<<"Queue is Full\n";
            else
            cout<<"Queue is not full\n";
            break;
            case 6:
            if(IsEmpty(&q))
            cout<<"Queue is Empty\n";
            else
            cout<<"Queue is not Empty\n";
            break;
            case 8:
            exit(0);
        }
    }    
}