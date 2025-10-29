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
        if (arr[i] >= 100 && arr[i] <= 675 && (arr[i] % 25 == 0))
        {
            {
                if (arr[i] <= arr[i + 1])
                {
                    ck = true;
                }
                else
                {
                    // cout << "No" << endl;
                    ck = false;
                }
            }
        }
        else
        {
            ck = false;
        }
    }
    if (ck)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
}