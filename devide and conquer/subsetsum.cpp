#include<bits/stdc++.h>
using namespace std;

void subsetsum(vector<int>&arr, int n, vector<int>&v, int idx = 0, int sum = 0) {
	if (idx == n)
	{
		for (int it = 0; it < v.size(); it++)
		{
			cout << v[it] << " ";
		}
		cout << " :: " << sum << endl;
		return;
	}
	sum += arr[idx];
	v.push_back(arr[idx]);
	subsetsum(arr, n, v, idx + 1, sum);
	sum -= arr[idx];
	v.pop_back();
	subsetsum(arr, n, v, idx + 1, sum);
}

int main()
{
	int n;
	cin >> n;
	vector<int>v;
	vector<int> arr(n);
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	subsetsum(arr, n, v);
	return 0;
}