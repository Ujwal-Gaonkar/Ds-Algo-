#include<bits/stdc++.h>
using namespace std;
class binaryTree
{
    binaryTree *lchild, *rchild, *p, *t;
    int data;
    queue<binaryTree*> Q;
public:
    binaryTree *root;
    void create();
    void pre_order(binaryTree *root);
    void in_order(binaryTree *root);
    void post_order(binaryTree *root);
    void level_order(binaryTree *root);
    int count(binaryTree *root);
    int height(binaryTree* root);
    int one_degree(binaryTree*root);
    int two_degree(binaryTree *root);

    int leaf_node(binaryTree *root);
};
void binaryTree::create()
{
    int x;
    cout<<"enter the value of root node :";
    cin>>x;
    root = new binaryTree();
    root->data=x;
    root->lchild=root->rchild=NULL;
    Q.push(root);
    while(!Q.empty())
    {
        p=Q.front();
        Q.pop();
        cout<<"enter the left child of :"<<p->data<<endl;
        cin>>x;
        if(x!=-1)
        {
            t=new binaryTree();
            t->data=x;
            t->lchild=t->rchild=NULL;
            p->lchild=t;
            Q.push(t);
        }
        cout << "enter the right child of :" << p->data << endl;
        cin >> x;
        if (x != -1)
        {
            t = new binaryTree();
            t->data = x;
            t->lchild = t->rchild = NULL;
            p->rchild = t;
            Q.push(t);
        }
    }
}
void binaryTree::pre_order(binaryTree *root)
{
    if(root)
    {
        cout<<root->data<<" ";
        pre_order(root->lchild);
        pre_order(root->rchild);
    }
}
void binaryTree::in_order(binaryTree *root)
{
    if (root)
    {
        in_order(root->lchild);
        cout << root->data << " ";
        in_order(root->rchild);
    }
}
void binaryTree::post_order(binaryTree *root)
{
    if (root)
    {
        post_order(root->lchild);
        post_order(root->rchild);
        cout << root->data << " ";
    }
} 
void binaryTree::level_order(binaryTree *root)
{
    queue<binaryTree*> temp;
    cout<<root->data<<" ";
    temp.push(root);
    while(!temp.empty())
    {
        root=temp.front();
        temp.pop();
        if(root->lchild)
        {
            cout<<root->lchild->data<<" ";
            temp.push(root->lchild);
        }
        if (root->rchild)
        {
            cout << root->rchild->data << " ";
            temp.push(root->rchild);
        }
    }
}
int binaryTree::count(binaryTree *root)
{
    int x,y;
    if(root)
    {
        x=count(root->lchild);
        y=count(root->rchild);
        return x+y+1;
    }
    return 0;
}    
int binaryTree::height(binaryTree* root)
{
    int x=0,y=0;
    if(root==NULL)
        return 0;
    x=height(root->lchild);
    y=height(root->rchild);
    return (x>y)?x+1:y+1;
}   
int binaryTree::leaf_node(binaryTree *root)
{
    if(!root)
        return 0;
    if(!root->lchild && !root->rchild)
        return leaf_node(root->lchild)+leaf_node(root->rchild)+1;
    else
        return leaf_node(root->lchild) + leaf_node(root->rchild);
}
int binaryTree::two_degree(binaryTree *root)
{
    if (!root)
        return 0;
    if (root->lchild && root->rchild)
        return two_degree(root->lchild) + two_degree(root->rchild) + 1;
    else
        return two_degree(root->lchild) + two_degree(root->rchild);
}
int binaryTree::one_degree(binaryTree *root)
{
    if (!root)
        return 0;
    if ((root->lchild && !root->rchild)|| (!root->lchild && root->rchild))
        return one_degree(root->lchild) + one_degree(root->rchild) + 1;
    else
        return one_degree(root->lchild) + one_degree(root->rchild);
}
int main()
{
    binaryTree bt;
    bt.create();
    cout << "preorder : ";
    bt.pre_order(bt.root);
    cout << endl;
    cout << "inorder : ";
    bt.in_order(bt.root);
    cout << endl;
    cout << "postorder : ";
    bt.post_order(bt.root);
    cout << endl;
    cout<<"levelorder : ";
    bt.level_order(bt.root);
    cout<<endl;
    cout<<"total number of node is "<<bt.count(bt.root)<<endl;
    cout<<"height of a binary tree is "<<bt.height(bt.root)<<endl;
    cout<<"degree 2 "<<bt.two_degree(bt.root)<<endl;
    cout << "degree 1 " << bt.one_degree(bt.root) << endl;
    cout << "degree 0 " << bt.leaf_node(bt.root) << endl;
    return 0;
}