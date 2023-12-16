#include<bits/stdc++.h>
using namespace std;
struct node *root;
struct node
{
    int data;
    node *left,*right;
};
void create()
{
    int x;
    cout<<"enter root node "<<endl;
    cin>>x;
    root=new node;
    root->data=x;
    root->left=root->right=NULL;
    queue<node *> q;
    q.push(root);
    node *temp;
    while(!q.empty())
    {
        temp=q.front();
        q.pop();
        cout<<"enter left node of "<<temp->data<<endl;
        cin>>x;
        if(x!=-1)
        {
            node *t=new node;
            t->data=x;
            t->left=t->right=NULL;
            temp->left=t;
            q.push(t);
        }
        cout << "enter right node of " << temp->data << endl;
        cin >> x;
        if (x != -1)
        {
            node *t = new node;
            t->data = x;
            t->left = t->right = NULL;
            temp->right = t;
            q.push(t);
        }
    }
}
void in_order(node *root)
{
    queue<node *> q;
    cout<<root->data<<" ";
    q.push(root);
    node *temp;
    while(!q.empty())
    {
        temp=q.front();
        q.pop();
        if(temp->left)
        {
            cout<<temp->left->data<<" ";
            q.push(temp->left);
        }
        if(temp->right)
        {
            cout<<temp->right->data<<" ";
            q.push(temp->right);
        }
    }
}
void pre_order(node *root)
{
    if(root)
    {
        cout<<root->data<<" ";
        pre_order(root->left);
        pre_order(root->right);
    }
}
int main()
{
    create();
    cout<<endl;
    pre_order(root);
    cout<<endl;
    cout<<"inorder is : "<<endl;
    in_order(root);
    cout<<endl;
}