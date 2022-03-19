#include <iostream>
using namespace std;

void printArray(int arr[], int n)
{
	int i;
	for (i = 0; i < n; i++)
		cout << arr[i] << " ";
	cout << endl;
}

void insertionSort(int arr[], int n) {
	int i, key, j;
	for (i = 1; i < n; i++)
	{
		key = arr[i];
		cout << "key: " << key << endl;
		printArray(arr, n);
		j = i - 1;
		while (j >= 0 && arr[j] > key)
		{
			arr[j + 1] = arr[j];
			j--;
		}
		arr[j + 1] = key;
		printArray(arr, n);
	}
}


int main()
{
	int arr[] = { 4, 3, 2, 10, 12, 1, 5, 6 };
	int n = sizeof(arr) / sizeof(arr[0]);

	insertionSort(arr, n);
	printArray(arr, n);

	return 0;
}
