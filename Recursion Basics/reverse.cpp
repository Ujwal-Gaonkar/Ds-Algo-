#include<bits/stdc++.h>
using namespace std;

void rev(vector<int> &v,int n,int pos)
{
    if(pos > (n/2)-1) return;

    swap(v[pos],v[n-pos-1]);
    rev(v,n,pos+1);
}
int main()
{
    vector<int> v={7,5,4,6,3,4};
    rev(v,v.size(),0);
    for(int i=0;i<v.size();i++)
        cout<<v[i]<<endl;
    return 0;
}