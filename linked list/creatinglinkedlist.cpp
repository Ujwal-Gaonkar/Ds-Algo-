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
    {
        first=last=t;
    }
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
int main()
{
    insert(1);
    insert(3);
    insert(5);
    insert(7);
    insert(9);
    display(first);
    return 0;
}