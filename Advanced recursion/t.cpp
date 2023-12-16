#include <bits/stdc++.h>
using namespace std;

void subsetsum(vector<int> &arr, int n, vector<int> &v, int i=0 , int sum = 0)
{
    if (i == n)
    {
        for (int it = 0; it < v.size(); it++)
        {
            cout << v[it] << " ";
        }
        cout << " :: " << sum << endl;
        return;
    }
    sum += arr[i];
    v.push_back(arr[i]);
    subsetsum(arr, n,v, i+ 1, sum);
    sum -= arr[i];
    v.pop_back();
    subsetsum(arr, n, v, i+ 1, sum);
}

int main()
{
    int n;
    cin >> n;
    vector<int> v;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    subsetsum(arr, n, v);
    return 0;
}