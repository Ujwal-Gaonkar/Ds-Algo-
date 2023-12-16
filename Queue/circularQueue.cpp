#include<bits/stdc++.h>
using namespace std;
struct Queue
{
    int size,front,rear;
    node **arr;
};
void create(Queue *q,int s)
{
    q->size=s;
    q->arr=new int[q->size];
    q->front=q->rear=0;
}
void enqueue(Queue *q,int x)
{
    if((q->rear+1)%q->size==q->front)
        cout<<"queue is full"<<endl;
    else
    {
        q->rear=(q->rear+1)%q->size;
        q->arr[q->rear]=x;
    }
}
int dequeue(Queue *q)
{
    int x=-1;
    if(q->rear==q->front)
        cout<<"Queue is empty"<<endl;
    else
    {
        q->front=(q->front+1)%q->size;
        x=q->arr[q->front];
    }
    return x;
}
void display(Queue q)
{
    cout<<"Queue is :"<<endl;
    int i=q.front+1;
    do
    {
        cout<<q.arr[i]<<" ";
        i=(i+1)%q.size;
    }while(i!=(q.rear+1)%q.size);
    cout<<endl;
}
int main()
{
    Queue q;
    create(&q,5);
    enqueue(&q, 10);
    enqueue(&q, 20);
    enqueue(&q, 30);
    enqueue(&q, 40);
    enqueue(&q, 50);
    enqueue(&q, 60);
    display(q);
    cout << dequeue(&q) << endl;
    return 0;
}