#include<bits/stdc++.h>
using namespace std;

int fibnum(int n)
{
    if(n==0||n==1)
        return n;
    
    return fibnum(n-1)+fibnum(n-2);
}
int main()
{
    int num;
    cin>>num;

    cout<<fibnum(num)<<endl;
    return 0;
}