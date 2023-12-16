#include<bits/stdc++.h>
using namespace std;
bool isPalindrome(string s, int start, int end) {
	while (start <= end) {
		if (s[start++] != s[end--])	return false;
	}
	return true;
}
void substring(int idx, string s, vector<string>& ds) {
	if (idx == s.length()) {
		for (auto it : ds)	cout << it << " ";
		cout << endl;	return;
	}
	for (int i = idx; i < s.length(); i++) {
		if (isPalindrome(s, idx, i)) {
			ds.push_back(s.substr(idx, i - idx + 1));
			substring(i + 1, s, ds);
			ds.pop_back();
		}
	}
}
int main()
{
	int t;
	cin >> t;
	while (t--) {
		string s;
		cin >> s;
		vector<string>ds;
		substring(0, s, ds);
		cout << endl;
	}
	return 0;
}