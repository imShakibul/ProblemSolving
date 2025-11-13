#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int arr[7];
        int ans = 0;
        for (int i = 0; i < 7; i++)
        {
            cin >> arr[i];
        }
        for (int i = 0; i < 7; i++)
        {
            ans += arr[i];
        }
        cout << ans << endl;
    }
    return 0;
}