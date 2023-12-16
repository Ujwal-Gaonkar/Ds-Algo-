#include<bits/stdc++.h>
using namespace std;

long  factorial(long n)
{
    if(n==0)
        return 1;
    return n*factorial(n-1);
}

int trailingZeros(int n)
{
    int res=0;
    for(int i=5;i<=n;i=i*5){
        res += n/i;
    }
    return res;
}
int main()
{
    long num;
    cin>>num;

    cout<<factorial(num)<<endl;

    cout<<trailingZeros(num)<<endl;
    return 0;
}