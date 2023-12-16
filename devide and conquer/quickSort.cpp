#include<bits/stdc++.h>
using namespace std;
int partition (int arr[], int low, int high)
{
	int pivot = arr[high];
	int i = low - 1;
	for (int j = low; j < high; j++)
	{
		if (arr[j] < pivot)
		{
			i++;
			swap(arr[i], arr[j]);
		}
	}
	swap(arr[i + 1], arr[high]);
	return i + 1;
}
void quickSort(int arr[], int low, int high)
{
	if (low < high)
	{
		int mid = partition(arr, low, high);
		quickSort(arr, low, mid - 1);
		quickSort(arr, mid + 1, high);
	}
}
int main()
{
	int n;
	cout<<"enter no of elements :"<<endl;
	cin >> n;
	int arr[n];
	cout<<"enter elements :"<<endl;
	for (int i = 0; i < n; i++)
		cin >> arr[i];
	quickSort(arr, 0, n - 1);
	cout<<"after sorting :"<<endl;
	for (int i = 0; i < n; i++)
		cout << arr[i] << " ";
	cout << endl;
}