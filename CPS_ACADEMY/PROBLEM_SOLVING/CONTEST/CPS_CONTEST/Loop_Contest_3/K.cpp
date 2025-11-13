#include <iostream>
using namespace std;

int main()
{
    int t{};
    cin >> t;

    while (t--)
    {
        int a1{}, a2{}, a3{}, b1{}, b2{}, b3{};
        cin >> a1 >> a2 >> a3 >> b1 >> b2 >> b3;

        int a_max{}, a_mid{}, a_min{};
        if (a1 >= a2 && a1 >= a3)
        {
            a_max = a1;
            a_min = (a2 <= a3 ? a2 : a3);
            a_mid = a1 + a2 + a3 - a_max - a_min;
        }
        else if (a2 >= a1 && a2 >= a3)
        {
            a_max = a2;
            a_min = (a1 <= a3 ? a1 : a3);
            a_mid = a1 + a2 + a3 - a_max - a_min;
        }
        else
        {
            a_max = a3;
            a_min = (a1 <= a2 ? a1 : a2);
            a_mid = a1 + a2 + a3 - a_max - a_min;
        }

        int b_max{}, b_mid{}, b_min{};
        if (b1 >= b2 && b1 >= b3)
        {
            b_max = b1;
            b_min = (b2 <= b3 ? b2 : b3);
            b_mid = b1 + b2 + b3 - b_max - b_min;
        }
        else if (b2 >= b1 && b2 >= b3)
        {
            b_max = b2;
            b_min = (b1 <= b3 ? b1 : b3);
            b_mid = b1 + b2 + b3 - b_max - b_min;
        }
        else
        {
            b_max = b3;
            b_min = (b1 <= b2 ? b1 : b2);
            b_mid = b1 + b2 + b3 - b_max - b_min;
        }

        int a_score{a_max * 100 + a_mid * 10 + a_min};
        int b_score{b_max * 100 + b_mid * 10 + b_min};

        if (a_score > b_score)
        {
            cout << "Alice" << endl;
        }
        else if (b_score > a_score)
        {
            cout << "Bob" << endl;
        }
        else
        {
            cout << "Tie" << endl;
        }
    }

    return 0;
}
