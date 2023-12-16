#include <bits/stdc++.h>
using namespace std;

bool checkBit(int n,int pos){
    int f=1;
    f=f<<pos;
    int res=n&f;
    if(res==0)
    {
        return false;
    }else
    {
        return true;
    }
}
int main()
{
    int n,pos;
    cin>>n>>pos;

    cout<<checkBit(n,pos)<<endl;
    return 0;
}