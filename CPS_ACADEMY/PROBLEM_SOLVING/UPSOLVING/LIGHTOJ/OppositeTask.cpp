#include <iostream>
using namespace std;

int main()
{
    int t, n;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> n;
        if (n >= 0)
        {
            a = n % 2;
            b = n - a;
            if (a <= 10 && b <= 10)
            {
                cout << a << " " << b << endl;
            }
        }
    }
    return 0;
}