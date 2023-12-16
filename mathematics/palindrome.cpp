#include<bits/stdc++.h>
using namespace std;

bool palindrome(int n)
{
    bool ispalindrome = false;
    int temp =n;
    int res=0;
    while(temp!=0)
    {
        int rem = temp%10;
        res = (res*10)+rem;
        temp /= 10;
    }
    if(res==n)
        ispalindrome = true;

    return ispalindrome;
}
int main()
{
    int n; cin>>n;
    
    cout<<palindrome(n)<<endl;
    
    return 0;
}