#include<bits/stdc++.h>
using namespace std;

void subset(int i,int arr[],int n,vector<int> &ds)
{
    if(i==n)
    {
        for(auto it : ds)
        {
            cout<<it<<" ";
        }
        cout<<endl;
        return;
    }

    ds.push_back(arr[i]);
    subset(i+1,arr,n,ds);
    ds.pop_back();
    subset(i+1,arr,n,ds);
}

signed main()
{
    int arr[]={1,3,2};
    vector<int> v;
    subset(0,arr,3,v);
    return 0;
}