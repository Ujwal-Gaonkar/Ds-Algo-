#include<bits/stdc++.h>
using namespace std;
bool isOperand(char x)
{
    if (x == '+' || x == '-' || x == '*' || x == '/' || x == '^')
        return false;
    else
        return true;
}
int postEvaluation()
{
    string postfix= "35*62/+4-";
    int i=0;
    int ans=0;
    stack<int> stk;
    while(postfix[i]!='\0')
    {
        if(isOperand(postfix[i]))
        {
            int num=postfix[i++]-48;
            stk.push(num);
        }
        else
        {
            int second=stk.top();
            stk.pop();
            int first=stk.top();
            stk.pop();
            if(postfix[i]=='+')
                ans=first+second;
            else if(postfix[i] == '-')
                ans = first - second;
            else if (postfix[i] == '*')
                ans = first * second;
            else
                ans = first / second;
            i++;
            stk.push(ans);
        }
    }
    return stk.top();
}
int main()
{
    cout<<postEvaluation()<<endl;
    return 0;
}