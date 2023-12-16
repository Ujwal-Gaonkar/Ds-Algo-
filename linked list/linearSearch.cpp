#include<bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    node *next;
}*first=NULL;

void create(int a[],int n)
{
    node *temp,*last;
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

node* search(node *p,int key)
{
    node *q=NULL;
    while(p!=NULL)
    {
        if(key==p->data) 
        {   
            q->next=p->next;
            p->next=first;
            first=p;
        }
        q=p;
        p=p->next;
    }
    return NULL;
}

void disp(node *p)
{
    while(p!=NULL)
    {
        cout<<p->data<<endl;
        p=p->next;
    }
}
int main()
{
    int a[]={10,20,30,40};
    create(a,4);
    cout<<search(first,40)<<endl;
    cout << search(first, 30) << endl;
    disp(first);
    return 0;
}
