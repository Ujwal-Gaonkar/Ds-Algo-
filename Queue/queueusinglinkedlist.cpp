#include<bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    node *next;
}*first=NULL,*rear=NULL;
void enqueue(int x)
{
    node *t=new node;
    if(t==NULL) cout<<"Queue is full "<<endl;
    else
    {
        t->data=x;
        t->next=NULL;
        if(first==NULL) first=rear=t;
        else
        {
            rear->next=t;
            rear=t;
        }
    }
}
int dequeue()
{
    int x=-1;
    if(first==NULL)
        cout<<"Queue is empty!"<<endl;
    else
    {
        node *p=first;
        first=first->next;
        x=p->data;
        free(p);
    }
    return x;
}

void display()
{
    cout<<"Queue is :"<<endl;
    node *p=first;
    while(p)
    {
        cout<<p->data<<" ";
        p=p->next;
    }
    cout<<endl;
}

int main()
{
    enqueue(10);
    enqueue(20);
    enqueue(30);
    enqueue(40);
    display();
    cout<<dequeue()<<endl;
    cout << dequeue() << endl;
    cout << dequeue() << endl;
    cout << dequeue() << endl;
    display();
    cout << dequeue() << endl;
}