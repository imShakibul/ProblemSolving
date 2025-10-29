#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        long long int sum = 0;
        long long int arr[n];
        for (long long int i = 0; i < n; i++)
        {
            cin >> arr[i];
            sum += arr[i];
        }
        long long int roott = sqrt(sum);
        if (roott * roott == sum)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }
    return 0;
}
