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
        int i = 1;
        for (i = 1; count < n; i++)
        {
            if ((i % 3 == 0) || (i % 10 == 3))
            {
                continue;
            }
            else
            {
                count++;
            }
        }

        cout << --i << endl;
    }
    return 0;
}