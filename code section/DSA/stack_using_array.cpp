#include <bits/stdc++.h>
using namespace std;
struct Stack
{
    int size;
    int top;
    int *s;
};
void create(struct Stack *st)
{
    cout<<"Enter size of stack:";
    cin>>st->size;
    st->top=-1;
    st->s = new int[st->size * sizeof(int)];
    cout<<"\n";
}
void push(struct Stack *st,int x)
{
    if(st->top  == st->size-1)
    cout<<"STACK OVERFLOW\n";
    else
    {
        st->top++;
        st->s[st->top]=x;
    }
}
int pop(struct Stack *st)
{
    int x=-1;
    if(st->top == -1)
    cout<<"STACK UNDERFLOW\n";
    else
    {
        x = st->s[st->top--];
    }
    return x;
}
int peek(struct Stack st,int pos)
{
    int x=-1;
    if(st.size-pos < 0)
    return x;
    else{
        x = st.s[st.size-pos];
        return x;
    }
}
void display(struct Stack st)
{
    for(int i = st.top;i>-1;i--)
    cout<<st.s[i]<<" ";
    cout<<"\n";
}
int IsEmpty(struct Stack st)
{
    return st.top == -1;
}
int IsFull(struct Stack st)
{
    return st.top == st.size-1;
}
int stackTop(struct Stack st)
{
    if(IsEmpty(st))
    return -1;
    else
    return st.s[st.top];
}
int main()
{
    struct Stack st;
    int cs,element,pos;
    while(1)
    {
        cout<<"1.CREATE STACK\n2.PUSH ELEMENT IN STACK\n3.POP AN ELEMENT IN STACK\n4.DISPLAY STACK\n5.PEEK ELEMENT IN STACK\n6.IsEmpty\n7.IsFull\n8.STACK TOP\n9.EXIT\n";
        cin>>cs;
        switch(cs){
            case 1:
                create(&st);
                break;
            case 2:
                cout<<"Enter the element that you want to push in stack:";
                cin>>element;
                push(&st,element);
                break;
            case 3:
                cout<<pop(&st)<<endl;
                break;
            case 4:
                display(st);
                break;
            case 5:
                cout<<"Enter at which position you want to peek the element:";
                cin>>pos;
                if(peek(st,pos)==-1)
                cout<<"Invalid Position\n";
                else
                cout<<peek(st,pos)<<endl;
                break;
            case 6:
                if(IsEmpty(st))
                cout<<"Stack is Empty\n";
                else
                cout<<"Stack is not Empty\n";
                break;
            case 7:
                if(IsFull(st))
                cout<<"Stack is Full\n";
                else
                cout<<"Stack is not Full\n";
                break;
            case 8:
                if(stackTop(st)==-1)
                cout<<"Stack is Empty\n";
                else
                cout<<stackTop(st)<<endl;
            case 9:
                exit(0);
        }
    }
}