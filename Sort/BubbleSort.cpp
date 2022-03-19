#include <iostream>
using namespace std;

void printArray(int arr[], int size)
{
	int i;
	for (i = 0; i < size; i++)
		cout <<" "<< arr[i];
	cout << endl;
}

void bubbleSort(int arr[], int n) {
	int i, j;
	bool swapped;
	for (i = 0; i < n-1; i++)
	{
		swapped = false;
		for (j = 0; j < n-i-1; j++)
		{
			printArray(arr, n);
			if (arr[j] > arr[j+1])
			{
				swap(arr[j], arr[j+1]);
				printArray(arr, n);
				swapped = true;
			}
		}
		if (!swapped)
			break;
	}
}


int main()
{
//	int arr[] = {64, 34, 25, 12, 22, 11, 90};
	int arr[] = {5, 1, 4, 2, 8};
	int n = sizeof(arr)/sizeof(arr[0]);
	bubbleSort(arr, n);
	cout <<"Sorted array: \n";
	printArray(arr, n);
	return 0;
}

