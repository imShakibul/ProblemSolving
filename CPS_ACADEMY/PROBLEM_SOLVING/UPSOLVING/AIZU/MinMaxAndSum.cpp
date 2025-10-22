#include <iostream>
using namespace std;

int main() {
    int t, x;
    cin >> t;

    long long maxVal, minVal,sum = 0;
    cin >> x;          
    maxVal = minVal = x;
    sum = x;

    for (int i = 1; i < t; i++) {
        cin >> x;
        sum = sum + x;
        if (x > maxVal)
            maxVal = x;
        if (x < minVal)
            minVal = x;
    }
    cout << minVal<<" "<<maxVal<<" "<<sum << endl;


    return 0;

    
}
