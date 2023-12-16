#include<bits/stdc++.h>
using namespace std;
bool isOperand(char x)
{
    if(x=='+'||x=='-'||x=='*'||x=='/'||x=='^')
        return false;
    else return true;
}
int pre(char x)
{
    if(x=='+'||x=='-')  return 1;
    else if(x=='*'||x=='/') return 2;
    else if(x=='^') return 3;
    else return 0;
}

string postfix(string str,stack<char> &st)
{
    int i=0;
    string ans="";
    while(str[i]!='\0')
    {
        if(isOperand(str[i]))
            ans+=str[i++];
        else
        {
            if(pre(str[i])>pre(st.top()))
            {
                st.push(str[i++]);
            }
            else
            {
                ans+=st.top();
                st.pop();
            }
        }
    }
    while(!st.empty())
    {
        ans += st.top();
        st.pop();
    }
    return ans;
}

int main()
{
    stack<char> st;
    cout<<"hi";
    string str="a+b*c-d/e^";
    cout<<postfix(str,st)<<endl;
    return 0;
}