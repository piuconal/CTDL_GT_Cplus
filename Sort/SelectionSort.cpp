#include <iostream>
using namespace std;

void printArray(int arr[], int size)
{
	int i;
	for (i=0; i < size; i++)
		cout << arr[i] << " ";
	cout << endl;
}

void selectionSort(int arr[], int n){
	int i, j, min_idx;
	for (i = 0; i < n-1; i++)
	{
		min_idx = i;
		for (j = i+1; j < n; j++) {
			if (arr[j] < arr[min_idx]) {
				min_idx = j;
			}
		}
		cout << "gia tri nho nhat la: " << arr[min_idx] << endl;
		printArray(arr, n);
		swap(arr[min_idx], arr[i]);
		printArray(arr, n);
	}
}


int main()
{
	int arr[] = {64, 25, 12, 22, 11};
	int n = sizeof(arr)/sizeof(arr[0]);
//	int n;
//	cin >> n;
//	int arr[n];
//	for (int i = 0; i < n; i++) {
//		cin >> arr[i];
//	}
	printArray(arr, n);
	selectionSort(arr, n);
	cout << "Sorted array: \n";
	printArray(arr, n);
	return 0;
}

