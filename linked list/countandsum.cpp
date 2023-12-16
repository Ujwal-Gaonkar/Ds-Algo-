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

void sumAndCnt(node *p)
{
    int sum=0,cnt=0;
    while(p!=NULL)
    {
        cnt++;
        sum+=p->data;
        p=p->next;
    }
    cout<<"count : "<<cnt<<" sum: "<<sum<<endl;
}

int main()
{
    int a[]={10,15,20,25,30};
    create(a,5);
    sumAndCnt(first);
    return 0;
}