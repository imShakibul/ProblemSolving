#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    string num;
    cin >> num;
    string AfterNum = "";

    for (int i = 0; i < num.length(); i++) {
        if (num[i] != '+') {
            AfterNum += num[i];
        }
    }

    sort(AfterNum.begin(), AfterNum.end());

    for (int i = 0; i < AfterNum.length(); i++) {
        cout << AfterNum[i];
        if (i != AfterNum.length() - 1) {
            cout << "+";
        }
    }
    cout<<endl;

    return 0;
}
