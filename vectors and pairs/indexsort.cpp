#include<bits/stdc++.h>
using namespace std;

bool myCompare(pair<int,int> v1, pair<int,int> v2)
{
    return v1.first<v2.first;
}
signed main()
{
    int arr[]={6,3,89,4,1,32,23,12,45,9};

    vector<pair<int,int>> v;

    for(int i=0;i<(sizeof(arr)/sizeof(arr[0]));i++)
        v.push_back(make_pair(arr[i],i));

    sort(v.begin(),v.end(),myCompare);

    for(int i=0;i<v.size();i++)
        arr[v[i].second]=i;
    
    for(auto a:arr)
        cout<<a<<endl;
    return 0;
}