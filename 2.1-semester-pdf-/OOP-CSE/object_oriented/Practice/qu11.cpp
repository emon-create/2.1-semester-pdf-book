#include <iostream>
using namespace std;
class InsertionSort
{
public:
	int arr[100], n, i, j, curr, prev, k;
	void input_data();
	void display_data();
	void insertion_sort();
};
void InsertionSort ::input_data()
{
	cout << "Enter number of elements : ";
	cin >> n;
	cout << "Enter array elements : " << endl;
	for (k = 0; k < n; k++)
	{
		cin >> arr[k];
	}
}
void InsertionSort ::display_data()
{
	for (k = 0; k < n; k++)
	{
		cout << arr[k] << " ";
	}
	cout << endl;
}
void InsertionSort ::insertion_sort()
{
	// outer looop
	for (i = 1; i < n; i++)
	{
		curr = arr[i];
		prev = i - 1;
		while (prev >= 0 && arr[prev] > curr)
		{
			arr[prev + 1] = arr[prev];
			prev--;
		}
		// Insert
		arr[prev + 1] = curr;
	}
}
int main()
{
	InsertionSort obj;
	obj.input_data();
	cout << "Array before sorting : " << endl;
	obj.display_data();
	obj.insertion_sort();
	cout << "Array after sorting : " << endl;
	obj.display_data();

	return 0;
}