#include<bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *next;
}*first=NULL;

void create(int a[],int n)
{
    Node *t,*last;
    first = new Node();
    first->data=a[0];
    first->next=NULL;
    last = first;

    for(int i=1;i<n;i++)
    {
        t=new Node();
        t->data=a[i];
        t->next=NULL;
        last->next=t;
        last=t;
    }
}

void display(Node *p)
{
    while(p)
    {
        cout<<p->data<<endl;
        p=p->next;
    }
}
int main()
{
    int a[]={5,3,9,2,4};
    create(a,5);
    display(first);
    return 0;
}