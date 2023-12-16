#include<bits/stdc++.h>
using namespace std;

void subset(int arr[],int i,int n,int k,vector<int> &ds,int sum){
    if(i==n){
        if(sum % k==0){
            for(auto it:ds){
                cout<<it<<" ";
            }
            cout<<endl;
            return;
        }
    }

    ds.push_back(arr[i]);
    sum+=arr[i];
    subset(arr,i+1,n,k,ds,sum);
    sum -= arr[i];
    ds.pop_back();
    subset(arr, i + 1, n, k, ds, sum);
}

int main()
{
    int arr[]={3,6};
    vector<int> v;
    subset(arr,0,2,3,v,0);
    return 0;
}