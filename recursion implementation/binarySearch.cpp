#include<bits/stdc++.h>
using namespace std;

int binarySearch(vector<int>&arr , int key,int low,int high){
    int mid=(low+high)/2;
    if (low > high) return -1;
    if(arr[mid]==key)   return mid;
    else if(arr[mid] > key) return binarySearch(arr,key,low,mid-1);
    else    return binarySearch(arr, key, mid+1, high);
}
int main()
{
    vector<int> v={2,4,5,23,43,90}; 
    cout<<binarySearch(v,9,0,v.size()-1);
    return 0;
}