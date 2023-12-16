#include<bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    node *next;
}*first=NULL,*last=NULL;
void insert(int x)
{
    node *t=new node();
    t->data=x;
    t->next=NULL;
    if(first==NULL)
        first=last=t;
    else
    {
        last->next=t;
        last=t;
    }
}
void display(node *p)
{
    while(p)
    {
        cout<<p->data<<endl;
        p=p->next;
    }
}
void insertsort(int x,node *p)
{
    node *t = new node();
    t->data = x;
    node *q=NULL;
    if(first==NULL)
    {
        first=t;
    }
    else
    {
        while(p && p->data < x)
        {
            q=p;
            p=p->next;
        }
        if(p==first)
        {
            t->next=first;
            first=t;
        }
        else
        {
            t->next=q->next;
            q->next=t;
        }
    }
}
int main()
{
    insert(10);
    insert(20);
    insertsort(5,first);
    display(first);
    return 0;
}