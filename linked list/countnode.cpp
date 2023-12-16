#include<bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    Node *next;
}*first=NULL;

void create(int a[],int n)
{
    Node *temp,*last;
    first=new Node();
    first->data=a[0];
    first->next=NULL;
    last=first;
    for(int i=1;i<n;i++)
    {
        temp=new Node();
        temp->data=a[i];
        temp->next=NULL;
        last->next=temp;
        last=temp;
    }
}

void count(Node *p,int &cnt)
{
    if(p==NULL) return;
    cnt++;
    count(p->next,cnt);
}
int main()
{
    int a[]={34,20,10,37,73};
    int cnt=0;
    create(a,5);
    count(first,cnt);
    cout<<cnt<<endl;
    return 0;
}