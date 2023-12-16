#include<bits/stdc++.h>
using namespace std;
int factorial(int n)
{
    if(n==0)
        return 1;
    
    return n*factorial(n-1);
}
int ncr(int n,int r)
{
    return (factorial(n))/(factorial(n-r) * factorial(r));
}

int npr(int n,int r)
{
    return factorial(n)/factorial(n-r);
}
int main()
{
    int n,r;
    cin>>n>>r;

    cout<<ncr(n,r)<<endl;

    cout<<npr(n,r)<<endl;
    return 0;
}