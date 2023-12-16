#include<bits/stdc++.h>
using namespace std;
struct Node
{
    int data,height;
    Node *left,*right;
}*root=NULL;
int height(Node *p)
{
    int lh=(p&&p->left)?p->left->height:0;
    int rh=(p&&p->right)?p->right->height:0;
    return 1+max(lh,rh);
}
int balance(Node *p)
{
    int lh = (p && p->left) ? p->left->height : 0;
    int rh = (p && p->right) ? p->right->height : 0;
    return lh-rh;
}
Node* LLRotation(Node *p)
{
    Node* pl,*plr;
    pl=p->left;
    plr=pl->right;
    pl->right=p;
    p->left=plr;
    if(root==p)
        root=pl;
    p->height=height(p);
    pl->height=height(pl);
    return pl;
}
Node *RRRotation(Node *p)
{
    Node *pr, *prl;
    pr = p->right;
    prl = pr->left;
    pr->left = p;
    p->right = prl;
    if (root == p)
        root = pr;
    p->height = height(p);
    pr->height = height(pr);
    return pr;
}
Node* LRRotation(Node *p)
{
    Node *pl=p->left;
    Node *plr=pl->right;

    pl->right=plr->left;
    p->left=plr->right;

    plr->right=p;
    plr->left=pl;
    p->height=height(p);
    pl->height=height(pl);
    plr->height=height(plr);

    if(root==p) root=plr;
    return plr;
}
Node *RLRotation(Node *p)
{
    Node *pl = p->right;
    Node *plr = pl->left;

    pl->left = plr->right;
    p->right = plr->left;

    plr->left = p;
    plr->right = pl;
    p->height = height(p);
    pl->height = height(pl);
    plr->height = height(plr);

    if (root == p)
        root = plr;
    return plr;
}
void pre_order(Node* p)
{
    if(p)
    {
        cout<<p->data<<" ";
        pre_order(p->left);
        pre_order(p->right);
    }
}
Node* insert(Node* p,int key)
{
    Node* t=NULL;
    if(p==NULL)
    {
        t=new Node;
        t->data=key;
        t->height=1;
        t->left=t->right=NULL;
        return t;
    }
    if(key<p->data)
        p->left=insert(p->left,key);
    else if(key>p->data)
        p->right=insert(p->right,key);

    p->height=height(p);

    if(balance(p)==2 && balance(p->left)==1)
        return LLRotation(p);
    else if(balance(p)==2 && balance(p->left)==-1)
        return LRRotation(p);
    else if (balance(p) == -2 && balance(p->right) == -1)
        return RRRotation(p);
    else if (balance(p) == -2 && balance(p->right) == 1)
        return RLRotation(p);
        return p;
}
int main()
{
    cout << "****" << endl;
    root=insert(root,30);
    insert(root,40);
    insert(root,35);
    cout<<"****"<<endl;
    pre_order(root);
    cout << "****" << endl;
}