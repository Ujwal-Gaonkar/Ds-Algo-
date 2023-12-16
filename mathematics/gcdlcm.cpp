#include<bits/stdc++.h>
using namespace std;

int gcd(int n1,int n2)
{
    return (n2==0 ? n1 : gcd(n2, n1%n2));
}
int lcm(int n1,int n2)
{
    return (n1*n2)/gcd(n1,n2);
}
int main()
{
    int num1,num2;
    cin>>num1>>num2;

    cout<<gcd(num1,num2)<<endl;

    cout<<lcm(num1,num2)<<endl;
    return 0;
}