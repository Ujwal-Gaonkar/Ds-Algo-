#include<bits/stdc++.h>
using namespace std;
bool armstrong(int n){
    bool isArmstrong = false;
    int org_num =n;
    int sum=0;
    while(n!=0)
    {
        int rem = n%10;
        sum +=rem*rem*rem;
        n/=10;
    }

    if(org_num==sum)
        isArmstrong = true;
    
    return isArmstrong;
}
int main()
{
    int n;
    cin>>n;
    cout<<armstrong(n)<<endl;
    return 0;
}