#include<bits/stdc++.h>
using namespace std;
class Stack
{
    int size,top=-1,*arr;
    public:
    void create(Stack *st);
    void push(Stack *st,int x);
    void pop(Stack *st);
    void peek(Stack st,int pos);
    void display(Stack st);
    bool isEmpty(Stack st);
    bool isFull(Stack st);
    void stackTop(Stack st);
};
bool Stack::isEmpty(Stack st)
{
    return st.top==-1;
}
bool Stack::isFull(Stack st)
{
    return st.top==st.size-1;
}
void Stack::create(Stack *st)
{
    cout<<"enter max size of stack : "<<endl;
    cin>>st->size;
    st->arr=new int[st->size];
}
void Stack::push(Stack *st,int x)
{
    if(isFull(*st))
        cout<<"stack overflow"<<endl;
    else
    {
        st->top++;
        st->arr[st->top]=x;
        cout<<x<<" inserted!!"<<endl;
    }
}
void Stack::pop(Stack *st)
{
    int x;
    if(isEmpty(*st))
        cout<<"stack underflow"<<endl;
    else
    {
        x=st->arr[st->top--];
        cout<<x<<" deleted!!"<<endl;
    }
}
void Stack::peek(Stack st,int pos)
{
    int idx=st.top-pos+1;
    if(idx<0)
        cout<<"invalid index!!"<<endl;
    else
        cout<<st.arr[idx]<<" peek element!!"<<endl;
}
void Stack::display(Stack st)
{
    cout<<"stack is : ";
    for(int i=st.top;i>=0;i--)
        cout<<st.arr[i]<<" ";
    cout<<endl;
}
void Stack::stackTop(Stack st)
{
    if(isEmpty(st))
        cout<<"stack is empty"<<endl;
    else
        cout<<"stack top is : "<<st.arr[st.top]<<endl;
}
int main()
{
    Stack st;
    st.create(&st);
    st.push(&st,10);
    st.push(&st, 20);
    st.push(&st, 30);
    st.display(st);
    st.push(&st,40);
    st.display(st);
    //st.peek(st,1);
    //st.stackTop(st);
    st.pop(&st);
    st.pop(&st);
    st.pop(&st);
    st.display(st);
    st.pop(&st);
    st.display(st);
    //st.stackTop(st);
    //st.peek(st,3); 
    return 0;
}