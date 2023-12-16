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
    if(first==NULL) first=last=t;
    else
    {
        last->next=t;
        last=t;
    }
}
bool check(node *p)
{
    int x=INT_MIN;
    while(p)
    {
        if(p->data > x)
        {
            x=p->data;
            p=p->next;
        }
        else
            return false;
    }
    return true;
}
int main()
{
    insert(6);
    insert(5);
    insert(8);
    insert(12);
    insert(16);
    cout<<check(first)<<endl;
    return 0;
}