#include<bits/stdc++.h>
using namespace std;
int sub(int arr[],int n,int sum,int i=0){
    if(i==n){
        if(sum==0)
        {
            return 1;
        }
        return 0;
    }
    int l=0,r=0;
    if(arr[i]<=sum){
        sum-=arr[i];
        l=sub(arr,n,sum,i);
        sum+=arr[i];
    }
    r=sub(arr,n,sum,i+1);
    return l+r;
}
int main()
{
    int arr[]={1,2};
    cout<<sub(arr,2,2)<<endl;
    return 0;
}