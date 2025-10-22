#include<iostream>
using namespace std;

int gcd(int a, int b){
    while(b != 0){
        int temp = a % b;
        a = b;
        b = temp;
    }
    return a;
}

int main()
{
    int t;
    cin>>t;
    while(t--){
        int firstNum;
        cin>>firstNum;
        int secondNum;
        cin>>secondNum;
        int result = gcd(firstNum,secondNum);
        cout<<result<<endl;
    }

    return 0;
}