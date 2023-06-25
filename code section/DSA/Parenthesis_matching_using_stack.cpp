#include <bits/stdc++.h>
using namespace std;
struct node{
    char data;
    struct node *next;
}*first;
char pop(struct node *p)
{
    char x=-1;
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
void push(struct node *p,char x)
{
    struct node *temp;
    temp = new node;
    if(temp == NULL)
    cout<<"Stack is Full\n";
    else{
        temp->data=x;
        temp->next=p;
        first=temp;
    }
    display(first);
}
int isbalanced(char *exp)
{
    int i=0;
    for(i=0;exp[i]!='\0';i++)
    {
        if(exp[i]=='('||exp[i]=='{'||exp[i]=='[')
        {
            push(first,exp[i]);
        }
        else if(exp[i]==')'||exp[i]=='}'||exp[i]==']')
        {
            if(first==NULL)
            return 0;
            if(exp[i]-first->data==1||exp[i]-first->data==2)
            pop(first);
            else
            return 0;
        }
    }
    if(first==NULL)
    return 1;
    else
    return 0;
}
int main()
{
    char *exp="{([a+b]*[c-d])}";
    cout<<isbalanced(exp);
}