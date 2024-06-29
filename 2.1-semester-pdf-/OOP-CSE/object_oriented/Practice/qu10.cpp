#include <iostream>
using namespace std;
class SelectionSort
{
public:
    int arr[100], minPost, i, j, n, k, temp;
    void input_data();
    void display_data();
    void selection_sort();
};
void SelectionSort ::input_data()
{
    cout << "Enter number of elements : ";
    cin >> n;
    cout << "Enter array elements : " << endl;
    for (k = 0; k < n; k++)
    {
        cin >> arr[k];
    }
}
void SelectionSort ::selection_sort()
{
    // outer Loop
    for (i = 0; i < n - 1; i++)
    {
        minPost = i;
        // sorting Loop
        for (j = i + 1; j < n; j++)
        {
            if (arr[minPost] > arr[j])
            {
                minPost = j;
            }
        }
        // swap
        temp = arr[minPost];
        arr[minPost] = arr[i];
        arr[i] = temp;
    }
}
void SelectionSort ::display_data()
{
    for (k = 0; k < n; k++)
    {
        cout << arr[k] << " ";
    }
    cout << endl;
}
int main()
{
    SelectionSort obj;
    obj.input_data();
    cout << "Array before sorting : " << endl;
    obj.display_data();
    obj.selection_sort();
    cout << "Array after sorting : " << endl;
    obj.display_data();

    return 0;
}
