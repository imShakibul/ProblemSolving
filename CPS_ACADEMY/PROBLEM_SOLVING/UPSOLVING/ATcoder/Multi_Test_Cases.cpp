#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N;
        cin >> N;

        int count = 0;
        for (int i = 0; i < N; i++) {
            long long A;
            cin >> A;
            if (A % 2 != 0) {
                count++;
            }
        }

        cout << count << endl;
    }

    return 0;
}
