#include <iostream>
using namespace std;
class emonkhan
{
public:
    int arr[100], n, i, k, pass, step, temp;
    void input();
    void display();
    void bubblesort();
};

void emonkhan ::input()
{
    cout << "Enter the number of n:" << endl;
    cin >> n;
    cout << "Enter array elements:";
    for (k = 1; k <= n; k++)
    {
        cin >> arr[k];
    }
}

void emonkhan ::display()
{
    for (k = 1; k <= n; k++)
    {
        cout << arr[k] << " ";
    }
    cout << endl;
}

void emonkhan ::bubblesort()
{
    for (pass = 1; pass <= n - 1; pass++)
    {
        for (step = 1; step <= n - pass; step++)
        {
            if (arr[step] > arr[step + 1])
            {
                temp = arr[step];
                arr[step] = arr[step + 1];
                arr[step + 1] = temp;
            }
        }
    }
}

int main()
{
    emonkhan obj;
    obj.input();
    cout << "after sorting:";

    obj.bubblesort();
    obj.display();
    return 0;
}