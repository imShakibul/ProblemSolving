#include <iostream>
using namespace std;

int main() {
    int n, k, m;
    cin >> n >> k >> m;

    int total = 0;
    for (int i = 1; i < n; i++) {
        int a;
        cin >> a;
        total += a;
    }

    int required = n * m - total;

    if (required > k) {
        cout << -1 << endl;
    } else if (required < 0) {
        cout << 0 << endl;
    } else {
        cout << required << endl;
    }

    return 0;
}
