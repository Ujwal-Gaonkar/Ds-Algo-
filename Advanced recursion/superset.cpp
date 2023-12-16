#include<bits/stdc++.h>
using namespace std;

void subset(string str,string ans,int i,int n)
{
    if(i==n)
    {
        cout<<ans<<endl;
        return;
    }
    ans+=str[i];
    subset(str,ans,i+1,n);
    ans.pop_back();
    subset(str,ans,i+1,n);
}
int main()
{
    string str="abc";
    subset(str,"",0,str.length());
    return 0;
}