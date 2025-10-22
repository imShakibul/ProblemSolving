#include<iostream>
using namespace std;

int main(){
    int a;
    int b;
    int gcd = 1;
    cin>>a>>b;

    int min;
    if(a<b){
        min = a;
        // cout<<min;
    }
    else{
        min = b;
        // cout<<min;
    }

    for(int i = min; min > 1; i--){
        if(a % i == 0 && b % i == 0){
            gcd = i;
            break;
        }
    }
    cout<<gcd<<endl;

    return 0;
}