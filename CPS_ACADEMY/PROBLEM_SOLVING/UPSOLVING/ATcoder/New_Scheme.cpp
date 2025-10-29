#include <iostream>
using namespace std;

int main()
{
    int arr[8];
    bool ck = true;

    for (int i = 0; i < 8; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < 8; i++)
    {
        if (!(arr[i] >= 100 && arr[i] <= 675 && arr[i] % 25 == 0))
        {
            ck = false;
            break;
        }

        if (i < 7 && arr[i] > arr[i + 1])
        {
            ck = false;
            break;
        }
    }

    if (ck)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;

    return 0;
}