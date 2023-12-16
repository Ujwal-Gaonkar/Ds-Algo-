 #include<bits/stdc++.h>
using namespace std;
bool isSafe(vector<vector<int>>&vis, int row, int col, int n) {
	for (int i = row, j = col; i >= 0 && j >= 0; i--, j--)
		if (vis[i][j] == 1)	return false;
	for (int i = row, j = col; i >= 0 && j >= 0; i, j--)
		if (vis[i][j] == 1)	return false;
	for (int i = row, j = col; i < n && j >= 0; i++, j--)
		if (vis[i][j] == 1)	return false;
	return true;
}
void nqueen(vector<vector<int>>&vis, int col, int n) {
	if (col == n) {
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++)
				cout << vis[i][j] << " ";
			cout << endl;
		}
		cout << endl;
		return;
	}
	for (int row = 0; row < n; row++) {
		if (isSafe(vis, row, col, n)) {
			vis[row][col] = 1;
			nqueen(vis, col + 1, n);
			vis[row][col] = 0;
		}
	}
}
int main()
{
	int n;
	cin >> n;
	vector<vector<int>> vis(n, vector<int>(n, 0));
	nqueen(vis, 0, n);
	return 0;
}