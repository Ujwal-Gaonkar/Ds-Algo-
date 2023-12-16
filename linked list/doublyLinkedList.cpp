#include<bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    node *prev,*next;
}*first=NULL;

void create(int a[],int n)
{
    node *temp,*last;
    first=new node;
    first->data=a[0];
    first->prev=first->next=NULL;
    last=first;

    for(int i=1;i<n;i++)
    {
        temp=new node;
        temp->data=a[i];
        temp->next=last->next;
        temp->prev=last;
        last->next=temp;
        last=temp; 
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
void insert(int pos,int x)
{
    node *p=first;
    node *t=new node;
    t->data=x;
    t->next=t->prev=NULL;
    if(pos == 0)
    {
        t->next=first;
        first->prev=t;
        first=t;
    }
    else
    {
        p=first;
        for(int i=1;i<pos;i++)
        {
            p=p->next;
        }
        t->next=p->next;
        t->prev=p;
        if(p->next!=NULL)
            p->next->prev=t;
        p->next = t;
    }
}
void deleteNode(int pos)
{
    node *p=first;
    node *q=NULL;
    if(pos==1)
    {
        q=p;
        p=p->next;
        first=p;
        first->prev=NULL;
        delete q;
    }
    else
    {
        p=first;
        for(int i=1;i<pos-1;i++)
        {
            p=p->next;
        }
        q=p->next;
        p->next=q->next;
        if(q->next)
            q->next->prev=p;
        delete q;
    }
}
int main()
{
    int a[]={10,20,30,40,50};
    create(a,5);
    display(first);
    cout<<"********************"<<endl;
    insert(5,55);
    display(first);
    cout<<"********************"<<endl;
    deleteNode(1);
    display(first);
    cout<<"********************"<<endl;
    deleteNode(5);
    display(first);
    cout<<"********************"<<endl;
    deleteNode(2);
    display(first);
    return 0;
}