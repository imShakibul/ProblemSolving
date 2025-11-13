#include <iostream>
#include <cmath>

#define ll long long

using namespace std;

int main()
{
    int n;
    cin >> n;
    ll arr[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }
    ll first = 0;
    ll second = 0;
    ll ans = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == j)
            {
                first += arr[i][j];
            }
            else if ((i + j) == (n - 1))
            {
                second += arr[i][j];
            }
        }
    }

    ans = first - second;
    cout << abs(ans) << endl;
    return 0;
}