#include<iostream>
using namespace std;
const int MOD = 998244353;

int main(){
    int n;
    cin>>n;
    long long int result = 1;
    for(int i = 1; i <= n; i++){
        result = (result * i) % MOD;
    }
    cout<<result<<endl;
    return 0;

}