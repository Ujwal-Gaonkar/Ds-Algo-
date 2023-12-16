#include<bits/stdc++.h>
using namespace std;
void heapify(int arr[],int n,int i)
{
    //consider ith index is largest
    int largest=i;
    // left child of ith index
    int left=(2*i)+1;
    // right child of ith index
    int right=(2*i)+2;
    // check for largest element
    if(left<n && arr[left] > arr[largest])  largest=left;
    if(right<n && arr[right]> arr[largest]) largest=right;
    // if the largest element index modified then swap it with ith index
    if(largest!=i)
    {
        swap(arr[largest],arr[i]);
        // recursively calling function for largest index 
        // because we dont know if it is heap or not , so we should check it recursively
        heapify(arr,n,largest);
    }
}
void print(int arr[],int n)
{
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
    cout<<endl;
}
void buildHeap(int arr[],int n)
{
    for(int i=(n/2)-1;i>=0;i--)
    {
    //starting from half of array because half of elements are leaf node ..... leaf node is considered as heap
        heapify(arr,n,i);
    }
    print(arr,n);
}
int main()
{
    int arr[]={80,40,60,75,85,45,50,55};
    //calculating size of array
    int n=sizeof(arr)/sizeof(arr[0]);
    print(arr,n);
    //calling buildHeap function to build max heap
    buildHeap(arr,n);
}


//time complexity is O(n)   