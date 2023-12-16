#include<bits/stdc++.h>
using namespace std;
struct TreeNode
{
    int data;
    TreeNode* left,*right;
}*root;

void create()
{
    int x;
    cout<<"enter root node "<<endl;
    cin>>x;
    root=new TreeNode;
    root->data=x;
    root->left=root->right=NULL;
    queue<TreeNode*> q;
    q.push(root);
    while(!q.empty())
    {
        TreeNode* p;
        p=q.front();
        q.pop();
        cout<<"enter left node of "<<p->data<<" ";
        cin>>x;
        cout << endl;
        if(x!=-1)
        {
            TreeNode* t=new TreeNode;
            t->data=x;
            t->left=t->right=NULL;
            p->left=t;
            q.push(t);
        }
        cout << "enter right node of " << p->data << " ";
        cin >> x;
        cout << endl;
        if (x != -1)
        {
            TreeNode *t = new TreeNode;
            t->data = x;
            t->left = t->right = NULL;
            p->right= t;
            q.push(t);
        }
    }
}

void preInPost(TreeNode* root)
{
    vector<int> pre,in,post;
    stack<pair<TreeNode*,int>> st;
    st.push(root,1);
    if(!root)   return;
    while ((!st.empty()))
    {
        auto it=st.top();
        st.pop();
        if(it.second==1)
        {
            pre
        }
    }
     
}