#include<bits/stdc++.h>
using namespace std;
// using & operator
// int countBit(int n)
// {
//     int count=0;
//     while(n!=0)
//     {
//         n=n&(n-1);
//         count++;
//     }
//     return count;
// }

// using >> right shift operator
int countBit(int n){
    int count=0;
    while(n!=0)
    {
        if((n&1)!=0){
            count++;
        }
        n=n>>1;
    }
    return count;
}
int main()
{
    int n;
    cin>>n;
    cout<<countBit(n)<<endl;

    return 0;
}