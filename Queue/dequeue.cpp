#include<bits/stdc++.h>
using namespace std;
struct Queue
{
    int size;
    int front;
    int rear;
    int *arr;
};
void create(Queue *q,int s)
{
    q->size=s;
    q->arr=new int[q->size];
    q->front=q->rear=-1;
}
void frontInsert(Queue *q,int x)
{
    if(q->rear!=-1 && q->front!=-1 &&q->front <= q->rear)
    {
        q->arr[q->front]=x;
        q->front--;
    }
    else
    cout<<"front is equal to -1 "<<endl;
}
void rearInsert(Queue *q,int x)
{
    q->rear++;
    q->arr[q->rear]=x;
}
int frontdelete(Queue *q)
{
    int x=-1;
    if (q->rear != -1 && q->front < q->rear)
    {
        q->front++;
        x=q->arr[q->front];
    }
    return x;
}
int rearDelete(Queue *q)
{
    int x=-1;
    if(q->rear >=q->front)
    {
        x=q->arr[q->rear];
        q->rear--;
    }
    return x;
}
int main()
{
    Queue q;
    create(&q,100);
    frontInsert(&q,10);
    rearInsert(&q,10);
    rearInsert(&q, 20);
    rearInsert(&q, 30);
    rearInsert(&q, 40);
    rearInsert(&q, 50);
    cout<<frontdelete(&q)<<endl;
    cout<<rearDelete(&q)<<endl;
    cout << frontdelete(&q) << endl;
    cout << frontdelete(&q) << endl;
    cout << frontdelete(&q) << endl;
    cout << frontdelete(&q) << endl;
    frontInsert(&q, 10);
    cout << frontdelete(&q) << endl;
}