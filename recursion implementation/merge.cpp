#include<bits/stdc++.h> 
using namespace std;

void merge(vector<int> &arr, int l, int mid, int r, vector<int> &ans)
{
    int i = l;
    int j = mid + 1;
    int k = l;

    while (i <= mid && j <= r)
    {
        if (arr[i] < arr[j])
            ans[k++] = arr[i++];
        else
            ans[k++] = arr[j++];
    }

    if (i > mid)
    {
        while (j <= r)
            ans[k++] = arr[j++];
    }
    else
    {
        while (i <= mid)
            ans[k++] = arr[i++];
    }

    for (k = l; k <= r; k++)
    {
        arr[k] = ans[k];
    }
}

void mergeSort(vector<int> &arr, int l, int r, vector<int> &ans)
{
    if (l < r)
    {
        int mid = (l + r) / 2;
        mergeSort(arr, l, mid, ans);
        mergeSort(arr, mid + 1, r, ans);
        merge(arr, l, mid, r, ans);
    }
    return;
}

int main()
{
    int n;
    cin >> n;
    vector<int> arr;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    vector<int> ans;
    mergeSort(arr, 0, n - 1, ans);
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}