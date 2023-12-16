#include<bits/stdc++.h>
using namespace std;
class node
{
    public:
    int data;
    node *next;
}*top=NULL;
class Stack
{
    int size,sizel=-1;

public:
    void create(Stack *st);
    void push(Stack *st, int x);
    void pop(Stack *st);
    void display(Stack st,node *top);
    bool isEmpty(Stack st);
    bool isFull(Stack st);
};
bool Stack::isEmpty(Stack st)
{
    return st.sizel == -1;
}
bool Stack::isFull(Stack st)
{
    return st.sizel == st.size - 1;
}
void Stack::create(Stack *st)
{
    cout << "enter max size of stack : " << endl;
    cin >> st->size;
}
void Stack::push(Stack *st, int x)
{
    if (isFull(*st))
        cout << "stack overflow" << endl;
    else
    {
        sizel++;
        node *t = new node;
        t->data = x;
        t->next=top;
        top=t;
        cout << x << " inserted!!" << endl;
    }
}
void Stack::pop(Stack *st)
{
    int x;
    if (isEmpty(*st))
        cout << "stack underflow" << endl;
    else
    {
        sizel--;
        node *t;
        t=top;
        top=top->next;
        cout<<t->data<<" deleted!!"<<endl;
        delete t;
    }
}
void Stack::display(Stack st,node *p)
{
    cout << "stack is : ";
    while(p)
    {
        cout<<p->data<<" ";
        p=p->next;
    }
    cout<<endl;
}
int main()
{
    Stack st;
    st.create(&st);
    st.push(&st, 10);
    st.push(&st, 20);
    st.push(&st, 30);
    st.display(st,top);
    st.push(&st, 40);
    st.display(st,top);
    st.pop(&st);
    st.pop(&st);
    st.pop(&st);
    st.display(st,top);
    st.pop(&st);
    st.display(st,top);
    return 0;
}
