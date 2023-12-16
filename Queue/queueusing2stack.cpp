#include<bits/stdc++.h>
using namespace std;
void enqueue(stack<int> *s1,stack<int> *s2,int x)
{
    s1->push(x);
}
int dequeue(stack<int> *s1, stack<int> *s2)
{
    int x=-1;
    if(s2->empty())
    {
        if(s1->empty())
        {
            cout<<"queue is empty"<<endl;
            return x;
        }
        else
        {
            while(!s1->empty())
            {
                s2->push(s1->top());
                s1->pop();
            }
        }
    }
    x = s2->top();
    s2->pop();
    return x;
}

int main()
{
    stack<int> s1; 
    stack<int> s2;
    cout<< dequeue(&s1, &s2)<<endl;
    enqueue(&s1, &s2,10);
    enqueue(&s1, &s2,6);
    enqueue(&s1, &s2, 8);
    cout << dequeue(&s1, &s2)<<endl;
    cout << dequeue(&s1, &s2) << endl;
    cout << dequeue(&s1, &s2) << endl;
    cout << dequeue(&s1, &s2) << endl;
    enqueue(&s1, &s2, 10);
    cout << dequeue(&s1, &s2) << endl;
}