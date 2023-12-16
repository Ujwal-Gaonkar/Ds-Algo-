#include<bits/stdc++.h>
using namespace std;

string getPermutation(int n, int k)	{
	int fact = 1;
	vector<int> ds;
	for (int i = 1; i < n; i++) {
		fact = fact * i;
		ds.push_back(i);
	}
	ds.push_back(n);
	string ans = "";
	k = k - 1;
	while (1) {
		ans = ans + to_string(ds[k / fact]);
		ds.erase(ds.begin() + k / fact);
		if (ds.size() == 0)	break;
		k = k % fact;
		fact = fact / ds.size();
	}
	return ans;
}

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		cout << "test case : " << t + 1 << endl;
		int n, k;
		cin >> n >> k;
		cout << getPermutation(n, k) << endl;
	}
	return 0;
}