#include<bits/stdc++.h>
using namespace std;

void combination(vector<int>&ans, vector<int>&arr, int target, int ind)
{
	if (target == 0)
	{
		for (auto it : ans)
		{
			cout << it << " ";
		}
		cout << endl;
		return;
	}

	for (int i = ind; i < arr.size(); i++)
	{
		if (arr[i] > target)	break;
		if (i > ind && arr[i] == arr[i - 1])	continue;
		ans.push_back(arr[i]);
		combination(ans, arr, target - arr[i], i + 1);
		ans.pop_back();
	}
}

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		vector<int>ans;
		int n;
		cin >> n;
		vector<int> arr(n);
		for (int i = 0; i < n; i++)
		{
			cin >> arr[i];
		}
		sort(arr.begin(), arr.end());
		int target;
		cin >> target;
		combination(ans, arr, target, 0);
		cout << endl;
	}
	return 0;
}