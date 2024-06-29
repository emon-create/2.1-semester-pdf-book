#include <iostream>
using namespace std;
class emonkhan
{
public:
    int arr[100], n, k, i, curr, prev;
    void input_data();
    void display_data();
    void sorted_data();
};

void emonkhan ::input_data()
{
    cout << "Enter the number of n";
    cin >> n;
    cout << "Enter the array elements:";
    for (k = 0; k < n; k++)
    {
        cin >> arr[k];
    }
}

void emonkhan ::sorted_data()
{
    for (i = 0; i < n; i++)
    {
        curr = arr[i];
        prev = i - 1;
        while (prev >= 0 && arr[prev] > curr)
        {
            arr[prev + 1] = arr[prev];
            prev--;
        }
        arr[prev + 1] = curr;
    }
}
void emonkhan ::display_data()
{
    for (k = 0; k < n; k++)
    {
        cout << arr[k] << " ";
    }
    cout << endl;
}

int main()
{
    emonkhan obj;
    obj.input_data();
    cout << "Before inerting data:" << endl;
    obj.display_data();

    cout << "After intserting" << endl;
    obj.sorted_data();
    obj.display_data();

    return 0;
}