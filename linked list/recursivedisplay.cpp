#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
    int data;
    Node* next;
}*head=NULL;
void create(int a[],int n)
{
    Node *temp,*last;
    head=new Node();
    head->data=a[0];
    head->next=NULL;
    last=head;
    for(int i=1;i<n;i++)
    {
        temp=new Node();
        temp->data=a[i];
        temp->next=NULL;
        last->next=temp;
        last=temp;
    }
}
void display(Node *p)
{
    if(p==NULL) return;
    display(p->next);
    cout<<p->data<<endl;
}
int main()
{
    int a[]={6,3,9,23,7};
    create(a,5);
    display(head);
    return 0;
}