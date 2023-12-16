#include<bits/stdc++.h>
using namespace std;
struct Stack
{
    int size;
    int top;
    int *s;
};
void create(Stack *st)
{
    cout << "enter size : ";
    cin >> st->size;
    st->top=-1;
    st->s=new int[st->size];
}
void display(Stack st)
{
    cout<<"stack is :"<<endl;
    for(int i=st.top;i>=0;i--)
        cout<<st.s[i]<<" ";
    cout<<endl;
}
void push(Stack *st,int x)
{
    if(st->top==st->size-1)
        cout<<"stack overflow"<<endl;
    else
    {
        st->top++;
        st->s[st->top]=x;
        cout<<x<<" is inserted!!"<<endl;
    }
}
void pop(Stack *st)
{
    if(st->top==-1)
        cout<<"stack underflow"<<endl;
    else
    {
        int temp=st->s[st->top--];
        cout<<temp<<" is deleted!!"<<endl;
    }
}
void peek(Stack st,int pos)
{
    int index=st.top-pos+1;
    if(index<0)
        cout<<"invalid position !!"<<endl;
    else
        cout<<"peek element is : "<<st.s[index]<<endl;
}
int main()
{
   Stack st;
   create(&st);
   push(&st,10);
   push(&st, 20);
   push(&st, 30);
   display(st);
   push(&st, 4);
   display(st);
   peek(st,1);
   pop(&st);
   pop(&st);
   pop(&st);
   display(st);
   pop(&st);
   return 0;
}