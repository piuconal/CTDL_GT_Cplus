#include<bits/stdc++.h>
using namespace std;
#define	FOR(i, l, r)	for(int i = l; i <= r; i++)
#define	FOD(i, r, l)	for(int i = r; i >= l; i--)
#define	ll	long long
#define	sz(a)	a.size()
#define PI	3.141592653589793

void print(int a[], int n)
{
	FOR(i, 0, n - 1)	cout << a[i] << ' ';
	cout << '\n';
}

void selectionSort(int a[], int n)
{
	FOR(i, 0, n - 2)
	{
		int min = i;
		FOR(j, i + 1, n - 1)
			if(a[j] < a[min])	min = j;
		swap(a[min], a[i]);
		print(a, n);
	}
	cout << '\n';
}

void insertionSort(int a[], int n)
{
	FOR(i, 1, n - 1)
	{
		int key = a[i];
		int j = i - 1;
		while(j >= 0 && a[j] > key)
		{
			a[j + 1] = a[j];
			j--;
		}
		a[j + 1] = key;
		print(a, n);
	}
	cout << '\n';
}

void bubbleSort(int a[], int n)
{
	bool swapped;
	FOR(i, 0, n - 2)
	{
		swapped = false;
		FOR(j, 0, n-i-2)
			if(a[j] > a[j+1])
			{
				swap(a[j], a[j+1]);
				print(a, n);
				swapped = true;
			}
		if(!swapped)	break;
	}
	cout << '\n';
}
int main()
{
	int test = 1;	
//	cin >> test;
//	cin.ignore();
	while(test--)
	{
		int a[] = {64, 25, 12, 22, 11};
		int b[] = {4, 3, 2, 10, 12, 1, 5, 6};
		int c[] = {5, 1, 4, 2, 8};
		int n_a = sizeof(a)/sizeof(a[0]);
		int n_b = sizeof(b)/sizeof(b[0]);
		int n_c = sizeof(c)/sizeof(c[0]);
		cout << "selectionSort:\n";
		selectionSort(a, n_a);
		cout << "insertionSort:\n";
		insertionSort(b, n_b);
		cout << "bubbleSort:\n";
		bubbleSort(c, n_c);
	}
	return 0;
}