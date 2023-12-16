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

void maxnum(node *p)
{
    int max_num =INT_MIN;
    while(p!=NULL)
    {
        if(p->data > max_num)
        {
            max_num=p->data;
        }
        p=p->next;
    }
    cout<<max_num<<endl;
}

int main()
{
    int a[]={10,20,30,40,-1,5};
    create(a,6);
    maxnum(first);
    return 0;
}