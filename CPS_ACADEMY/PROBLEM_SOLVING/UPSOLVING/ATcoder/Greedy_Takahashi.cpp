#include<iostream>
using namespace std;

int main(){
    long long int a,b,k,min;
    cin>>a>>b>>k;
    if(a >= k){
        cout<<a-k<<" "<<b<<endl;
    }else if(a <= k){
        min = (k-a);
        if(a+b >= k){
        // cout<<min<<endl;
        cout<<"0"<<" "<<b-min<<endl;
        }else{
            cout<<"0"<<" "<<"0"<<endl;
        }
    }
    return 0;
}