#include <iostream>
using namespace std;
class BubbleSort
{
public:
	int arr[100], n, temp,pass,step,k;
	void input_data();
	void display_data();
	void bubble_sort();
};
void BubbleSort ::input_data()
{
	cout << "Enter number of elements : ";
	cin >> n;
	cout << "Enter array elements : " << endl;
	for (k = 1; k <= n; k++)
	{
		cin >> arr[k];
	}
}
void BubbleSort ::display_data()
{
	for (k = 1; k <= n; k++)
	{
		cout << arr[k] << " ";
	}
	cout << endl;
}
void BubbleSort ::bubble_sort(){
    for(pass=1;pass<=n-1;pass++)
    {
        for(step=1;step<=n-pass;step++)
        {
            if(arr[step]>arr[step+1])
            {
                temp=arr[step];
                arr[step]=arr[step+1];
                arr[step+1]=temp;
            }
        }
    }
    // cout << "Array after sorting : " << endl;
    // for (k = 1; k <= n; k++)
	// {
	// 	cout << arr[k] << " ";
	// }
	// cout << endl;
}
int main(){
    BubbleSort obj;
    obj.input_data();
    cout << "Array before sorting : " << endl;
    obj.display_data();

    obj.bubble_sort();
    cout << "Array after sorting : " << endl;
    obj.display_data();

    return 0;
}