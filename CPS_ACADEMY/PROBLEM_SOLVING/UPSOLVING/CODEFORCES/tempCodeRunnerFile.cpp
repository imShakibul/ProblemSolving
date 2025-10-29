#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int count = 0;
        for (int i = 0; count <= n; i++)
        {
            if ((i % 3 == 0) || (i % 10 == 3))
            {
                // n++;
                continue;
            }
            else
            {
                count++;
                // if (count == n)
                // {
                //     cout << i << endl;
                // }
            }
        }
        cout << count << endl;
    }
    return 0;
}