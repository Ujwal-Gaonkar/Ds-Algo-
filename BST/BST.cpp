#include<bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    node*left,*right;
}*root=NULL;
node* insert(node *p,int key)
{
    if(p==NULL)
    {
        p=new node;
        p->data=key;
        p->left=p->right=NULL;
        return p;
    }
    if(key < p->data)
        p->left=insert(p->left,key);
    else
        p->right=insert(p->right,key);
    return p;
}
void pre_order(node *root)
{
    if(root)
    {
       // cout << root->data << " ";
        pre_order(root->left);
        cout << root->data << " ";
        pre_order(root->right);
    }
}
node *Delete(node *root,int key)
{
    if(!root)   return NULL;
    if(key==root->data)
    {
        if(root->right)
        {
            node* right=root->right;
            while(right->left)
                right=right->left;
            swap(root->data,right->data);
        }
        else
        {
            node* left=root->left;
            delete root;
            return left;
        }
    }
    root->left=Delete(root->left,key);
    root->right=Delete(root->right,key);
    return root;
}
int main()
{
    root = insert(root, 50);
    insert(root, 30);
    insert(root, 25);
    insert(root, 60);
    insert(root, 35);
    insert(root, 75);
    insert(root, 55);
    root=Delete(root,30);
    cout<<endl;
    cout<<"preorder is : ";
    pre_order(root);
    cout<<endl;
}