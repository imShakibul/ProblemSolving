#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    int arr[t];
    for (int i = 0; i < t; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < t; i++)
    {
        if (!(arr[i] < arr[i + 1]))
        {
            cout << arr[i] << endl;
            break;
        }
        // else
        // {
        //     cout << i << endl;
        //     break;
        // }
    }

    return 0;
}