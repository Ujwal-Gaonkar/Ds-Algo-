#include<bits/stdc++.h>
using namespace std;

int mod=1e9+7;
long power(long x,long n)
{
    if(n==0)    return 1;
    long long int y=power(x,n/2);
    if(n%2==0)  return (y*y)%mod;
    else    return n<0?(1/x*y*y)%mod:(x*y*y)%mod;
}
int main()
{
    cout<<power(3978432,5);
    return 0;
}