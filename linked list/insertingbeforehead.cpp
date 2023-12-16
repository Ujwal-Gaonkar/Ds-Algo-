#include<bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    node *next;
}*first=NULL;
void create(int a[],int n)
{
    node *last,*temp;
    first=new node();
    first->data=a[0];
    first->next=NULL;
    last=first;
    for(int i=1;i<n;i++)
    {
        temp=new node();
        temp->data=a[i];
        temp->next=NULL;
        last->next=temp;
        last=temp;
    }
}
void display(node *p)
{
    while(p!=NULL)
    {
        cout<<p->data<<endl;
        p=p->next;
    }
}
void insert(int n)
{
    node *t= new node();
    t->data=n;
    t->next=first;
    first=t;
}
void random(int pos,int n)
{
    node *t=new node();
    t->data=n;
    node  *p=first;
    for(int i=0;i<pos-1;i++)
        p=p->next;
    t->next=p->next;
    p->next=t;
}
int main()
{
    int a[]={2,3,4,5,7};
    create(a,5);
    //insert(1);
    random(5,8);
    display(first);
    return 0;
}