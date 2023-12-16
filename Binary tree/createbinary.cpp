#include <bits/stdc++.h>
using namespace std;
struct node* root=NULL;
struct node
{
    node *lchild;
    int data;
    node *rchild;
};
struct Queue
{
    int size, front, rear;
    node **arr;
};
void create(Queue *q, int s)
{
    q->size = s;
    q->arr = new node*[q->size];
    q->front = q->rear = 0;
}
void enqueue(Queue *q, node* x)
{
    if ((q->rear + 1) % q->size == q->front)
        cout << "queue is full" << endl;
    else
    {
        q->rear = (q->rear + 1) % q->size;
        q->arr[q->rear] = x;
    }
}
node* dequeue(Queue *q)
{
    node* x =NULL;
    if (q->rear == q->front)
        cout << "Queue is empty" << endl;
    else
    {
        q->front = (q->front + 1) % q->size;
        x = q->arr[q->front];
    }
    return x;
}
int isEmpty(struct Queue q)
{
    return q.front==q.rear;
}
void Treecreate()
{
    node *p,*t;
    int x;
    Queue q;
    create(&q,100);
    cout<<"enter the root  value :"<<endl;
    cin>>x;
    root=new node;
    root->data=x;
    root->lchild=root->rchild=NULL;
    enqueue(&q,root);
    while(!isEmpty(q))
    {
        p=dequeue(&q);
        cout<<"enter left child of "<<p->data<<endl;
        cin>>x;
        if(x!=-1)
        {
            t=new node;
            t->data=x;
            t->lchild=t->rchild=NULL;
            p->lchild=t;
            enqueue(&q,t);
        }
        cout << "enter right child of " <<p->data<<endl;
        cin >> x;
        if (x != -1)
        {
            t = new node;
            t->data = x;
            t->lchild = t->rchild = NULL;
            p->rchild = t;
            enqueue(&q, t);
        }
    }
}
void preorder(node *p)
{
    if(p)
    {
        cout<<p->data<<" ";
        preorder(p->lchild);
        preorder(p->rchild);
    }
}
void inorder(node *p)
{
    if(p)
    {
        inorder(p->lchild);
        cout<<p->data<<" ";
        inorder(p->rchild);
    }
}
void postorder(node *p)
{
    if(p)
    {
        postorder(p->lchild);
        postorder(p->rchild);
        cout<<p->data<<" ";
    }
}
int main()
{
    Treecreate();
    cout<<"preorder : ";
    preorder(root);
    cout<<endl;
    cout << "inorder : ";
    inorder(root);
    cout << endl;
    cout << "postorder : ";
    postorder(root);
    cout << endl;
    return 0;
}

