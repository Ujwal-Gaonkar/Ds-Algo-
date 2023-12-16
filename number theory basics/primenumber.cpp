#include<bits/stdc++.h>
using namespace std;

//to check if a number is prime or not
bool prime(int n)
{
    bool isprime = true;
    if(n<2)
        isprime = false;
    for(int i=2;i<n;i++)
    {
        if(n%i==0)
        {
            isprime = false;
            break;
        }
    }
    return isprime;
}

int main()
{
    int n;
    cin>>n;
    cout<<prime(n)<<endl;

    return 0;
}