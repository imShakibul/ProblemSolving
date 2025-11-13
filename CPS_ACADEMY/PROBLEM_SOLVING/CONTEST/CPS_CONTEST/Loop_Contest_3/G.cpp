#include <iostream>
using namespace std;

int main() {
    int n, x;
    cin >> n >> x;

    int score[n];
    for (int i = 0; i < n; i++) {
        cin >> score[i];
    }

    int total = 0;
    for (int i = 0; i < n; i++) {
        if (score[i] <= x) {
            total += score[i];
        }
    }

    cout << total << endl;

    return 0;
}
