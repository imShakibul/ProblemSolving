#include <iostream>
using namespace std;

int gcd(int a, int b) {
    while (b != 0) {
        int temp = a % b;
        a = b;
        b = temp;
    }
    return a;
}

int main() {
    int n;
    cin >> n;
    int firstN;
    cin >> firstN;
    for (int i = 1; i < n; i++) {
        int SecondN;
        cin >> SecondN;
        firstN = gcd(firstN, SecondN);
    }
    cout << firstN << endl;
    return 0;
}
