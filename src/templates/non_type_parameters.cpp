// A C++ program to demonstrate working of non-type
// parameters to templates in C++.
#include <iostream>
using namespace std;

template <class T, int max>
int arrMin(T arr[], int n)
{
	int m = max;
	for (int i = 0; i < n; i++)
		if (arr[i] < m)
			m = arr[i];

	return m;
}

int main()
{
	int arr1[] = {10, 20, 15, 12};
	int n1 = sizeof(arr1) / sizeof(arr1[0]);
	cout << n1 << endl;

	char arr2[] = {'b', 'c', 'd'};
	int n2 = sizeof(arr2) / sizeof(arr2[0]);
	cout << n2 << endl;

	// Second template parameter to arrMin must be a constant
	cout << arrMin<int, 10000>(arr1, n1) << endl;
	int res = arrMin<char, 256>(arr2, n2);
	char resChar = static_cast<char>(res);
	cout << res << endl;
	cout << resChar;
	return 0;
}
