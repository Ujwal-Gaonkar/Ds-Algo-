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
void deleteNode(int pos)
{
    node *q=NULL;
    node *p = first;
    if(pos==1)
    {
        first=first->next;
        delete p;
    }
    else
    {
        for(int i=0;i<pos-1 && p;i++)
        {
            q=p;
            p=p->next;
        }
        if(p)
        {
            q->next=p->next;
            delete p;
        }else{
            cout<<"invalid position !!!"<<endl;
        }
    }
}
int main()
{
    insert(1);
    insert(3);
    insert(5);
    insert(6);
    insert(7);
    display(first);
    cout<<"--------"<<endl;
    deleteNode(1);
    display(first);
    return 0;
}