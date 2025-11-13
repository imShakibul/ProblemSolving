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
        for (int i = 0; i <= n; i++)
        {
            if ((i % 3 == 0) || (i % 10 == 3))
            {
                count++;
                n++;
                continue;
            }
            else
            {
                count++;
                if (count == n)
                {
                    cout << i << endl;
                }
            }
        }
    }
    return 0;
}