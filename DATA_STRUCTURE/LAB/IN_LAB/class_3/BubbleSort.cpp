#include <iostream>
using namespace std;

void BubbleSort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    cout << "Array After Sorting..." << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main()
{
    int n;
    cout << "Please Enter number of Element :";
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cout << "Please enter value of Index [" << i << "] : ";
        cin >> arr[i];
    }

    cout << "Array Before Sorting..." << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    BubbleSort(arr, n);

    return 0;
}