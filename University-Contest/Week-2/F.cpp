
/*
#include<iostream>
#include<math.h>
using namespace std;

bool isPrime(int n){
    if(n == 0 || n == 1){
        return false;
    }

    for(int i = 2; i < sqrt(n); i++){
        if(n % i == 0){
            return false;
        }
    }
    return true;
}

int main(){
    int primeN = 100000000;

    for(int i = 1; i <primeN; i++){
        if(isPrime(i)){
            cout<<i<<endl;
        }
    }

}

*/

//Learned New Ieve of Eratosthenes (From Apna College https://www.youtube.com/watch?v=Y4KdgqV1IqA)


#include<iostream>
#include<vector>
using namespace std;

int main() {
    int n = 100000000;
    vector<bool> isPrime(n + 1, true);
    isPrime[0] = isPrime[1] = false;

    for (int i = 2; i * i <= n; i++) {
        if (isPrime[i]) {
            for (int j = i * i; j <= n; j += i) {
                isPrime[j] = false;
            }
        }
    }

    int count = 0;
    for (int i = 2; i < n; i++) {
        if (isPrime[i]) {
            count++;
            if (count % 100 == 1) {
                cout << i << endl;
            }
        }
    }

    return 0;
}

