#include<bits/stdc++.h>
using namespace std;
class Stack
{
    public:
    int size,top=-1;
    char *s;
    public:
    void create(Stack *st,int n);
    void push(Stack *st,char c);
    void pop(Stack *st);
    bool isEmpty(Stack st);
    bool isMatching(string Str,Stack st);
};

void Stack::create(Stack *st,int n)
{
    st->size=n;
    st->s=new char[st->size];
}
bool Stack::isEmpty(Stack st)
{
    return top==-1;
}
void Stack::push(Stack *st,char c)
{
    st->top++;
    st->s[st->top]=c;
}
void Stack::pop(Stack *st)
{
    st->top--;
}
bool Stack::isMatching(string str,Stack st)
{
    st.create(&st,str.length());
    for(int i=0;str[i]!='\0';i++)
    {
        if(str[i]=='(') st.push(&st,str[i]);
        else if(str[i]==')')
        {
            if(st.isEmpty(st)) return false;
            st.pop(&st);
        }
    }
    return st.isEmpty(st)?true:false;
}
int main()
{
    string str="((())";
    Stack st;
    cout<<st.isMatching(str,st);
    return 0;
}