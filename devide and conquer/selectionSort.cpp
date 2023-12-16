#include<bits/stdc++.h>
using namespace std;
const int N = 1e5 + 10;
int arr[N];
void selectionSort(int n) {
	for (int i = 0; i < n; i++) {
		int minidx = i;
		for (int j = i + 1; j < n; j++) {
			if (arr[j] < arr[minidx])
				minidx = j;
		}
		swap(arr[minidx], arr[i]);
	}
}

int main()
{
	int n;
	cout<<"enter no of elements"<<endl;
	cin >> n;
	cout<<"enter elements : "<<endl;
	for (int i = 0; i < n; i++)
		cin >> arr[i];

	selectionSort(n);
	cout<<"after sorting :"<<endl;
	for (int i = 0; i < n; i++)
		cout << arr[i] << " ";

	cout << endl;
	return 0;
}