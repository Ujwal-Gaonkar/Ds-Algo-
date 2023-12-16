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
void print(node *p)
{
    while(p)
    {
        cout<<p->data<<endl;
        p=p->next;
    }
}
void removeDuplicate()
{
    node *p=first;
    node *q=first->next;
    while(q)
    {
        if(p->data==q->data)
        {
            p->next=q->next;
            delete q;
            q=p->next;
        }
        else
        {
            p=q;
            q=q->next;
        }
    }
}
int main()
{
    insert(3);
    insert(5);
    insert(5);
    insert(8);
    insert(8);
    insert(8);
    print(first);
    cout<<"----"<<endl;
    removeDuplicate();
    print(first);
    return 0;
}