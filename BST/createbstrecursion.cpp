#include<bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    node *right,*left;
}*root=NULL;

node* create(node *root,int key)
{
    node *p=root;
    if(p==NULL)
    {
        p=new node;
        p->data=key;
        p->left=p->right=NULL;
        return p;
    }

    if(key < p->data)
        p->left=create(p->left,key);
    else
        p->right=create(p->right,key);
    return p;
}
void in_order(node *root)
{
    if(root)
    {
        in_order(root->left);
        cout<<root->data<<" ";
        in_order(root->right);
    }
}
int search(node *root,int key)
{
    if(!root)   return 0;
    if(key==root->data)
        return 1;
    else if(key<root->data)
        return  search(root->left,key);
    else
        return search(root->right,key);
}
int height(node *root)
{
    if(!root)   return 0;
    int lh=height(root->left);
    int rh=height(root->right);
    return 1+max(rh,lh);
}
node *inPre(node *p)
{
    while(p &&p->right!=NULL)
        p=p->right;
    return p;
}
node *inSucc(node *p)
{
    while (p && p->left != NULL)
        p = p->left;
    return p;
}
node* Delete(node *root,int key)
{
    node *p=root;
    node*q;
    if(p==NULL)  return NULL;
    if(p->left==NULL && p->right==NULL)
    {
        if(p==root)
            root=NULL;
        delete p;
        return NULL;
    }
    if(key<p->data)
        p->left=Delete(p->left,key);
    else if(key>p->data)
        p->right=Delete(p->right,key);
    else
    {
        if(height(p->left)>height(p->right))
        {
            q=inPre(p->left);
            p->data=q->data;
            p->left=Delete(p->left,q->data);
        }
        else
        {
            q = inSucc(p->right);
            p->data = q->data;
            p->right = Delete(p->right, q->data);
        }
    }
    return p;
}
int main()
{
    root=create(root,9);
    create(root,15);
    create(root, 5);
    create(root, 20);
    create(root, 16);
    create(root, 8);
    create(root, 12);
    create(root, 3);
    create(root, 6);
    create(root,30);
    cout<<endl;
    Delete(root,9);
    cout<<"inorder is : ";
    in_order(root);
    cout<<endl;
    cout<<search(root,17)<<endl;
}