#include<bits/stdc++.h>
using namespace std;

unsigned long int catalan(int n)
{
    unsigned long res = 0;

    if(n<=1)
        return 1;

    for(int i=0;i<n;i++)
    {
        res += catalan(i)*catalan(n-i-1);
    }
    return res;
}

int main()
{
    int n; cin>>n;

    for(int i=0;i<n;i++)
    {
        cout<<catalan(i)<<endl;
    }
    return 0;
}