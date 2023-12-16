#include<bits/stdc++.h>
using namespace std;
const int N=1e5+10;
void heapifyInsert(int arr[],int n,int i)
{
    int parent=(i-1)/2;
    if(i>=0)
    {
        if(arr[parent]<arr[i])
        {
            swap(arr[i],arr[parent]);
            heapifyInsert(arr,n,parent);
        }
    }
}
void printArray(int arr[], int n)
{
    cout << endl;
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}
void insertNode(int arr[],int key,int& n)
{
    n=n+1;
    arr[n-1]=key;
    heapifyInsert(arr,n,n-1);
    printArray(arr,n);
}
void heapifyDelete(int arr[],int n,int i)
{
    int largest=i;
    int left=(2*i)+1;
    int right=(2*i)+2;
    if(left < n && arr[left] > arr[right])
        largest=left;
    if(right < n && arr[right] > arr[left])
        largest=right;
    if(largest!=i)
    {
        swap(arr[i],arr[largest]);
        heapifyDelete(arr,n,largest);
    }
}
void deleteNode(int arr[],int& n)
{
    if(n>=0)
    {
        int lastNum=arr[n-1];
        n=n-1;
        arr[0]=lastNum;
        heapifyDelete(arr,n,0);
        printArray(arr,n);
    }
}
int  main()
{
    int arr[N]={100,60,80,50,55,65};
    int n=6;
    insertNode(arr,120,n);
    insertNode(arr,180,n);
    deleteNode(arr,n);
    deleteNode(arr, n);
    deleteNode(arr, n);
    deleteNode(arr, n);
    deleteNode(arr, n);
    deleteNode(arr, n);
    deleteNode(arr, n);
    deleteNode(arr, n);
    deleteNode(arr, n);
}