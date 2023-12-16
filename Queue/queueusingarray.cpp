#include<bits/stdc++.h>
using namespace std;
struct Queue
{
    int size;
    int front;
    int rear;
    int *arr;
};
void create(Queue *q)
{
    cout<<"enter size :"<<endl;
    cin>>q->size;
    q->arr=new int[q->size];
    q->front=q->rear=-1;
}
bool isFull(Queue q)
{
    return q.rear==q.size-1;
}
bool isEmpty(Queue q)
{
    return q.front==q.rear;
}
void enqueue(Queue *q,int x)
{
    if(isFull(*q))
        cout<<"Queue is Full"<<endl;
    else
    {
        q->rear++;
        q->arr[q->rear]=x;
    }
}
int dequeue(Queue *q)
{
    int x=-1;
    if(isEmpty(*q))
        cout<<"Queue is empty"<<endl;
    else
    {
        q->front++;
        x=q->arr[q->front];
    }
    return x;
}
void display(Queue q)
{
    cout<<"queue is :"<<endl;
    int i=q.front;
    i=i+1;
    for(;i<=q.rear;i++)
    {
        cout<<q.arr[i]<<" ";
    }
    cout<<endl;
}

int main()
{
    Queue q;
    create(&q);
    enqueue(&q,10);
    enqueue(&q, 20);
    enqueue(&q, 30);
    display(q);
    enqueue(&q, 40);
    cout<<dequeue(&q)<<endl;
    cout << dequeue(&q)<<endl;
    cout << dequeue(&q)<<endl;
    display(q);
    cout << dequeue(&q)<<endl;
    display(q);
    return 0;
}