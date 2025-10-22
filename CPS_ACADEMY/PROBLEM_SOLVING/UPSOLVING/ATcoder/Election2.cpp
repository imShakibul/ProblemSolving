#include<iostream>
using namespace std;

int main(){
    int n,t,a,aoki,taka;
    cin>>n>>t>>a;
    if(t+a <= n){
        if(t > a){
            taka = n - (t+a);
            if((taka + a)< t ){
                cout<<"Yes"<<endl;
            }else{
                cout<<"No"<<endl;
            }
        }
        else if(t < a){
            aoki = n - (t+a);
            if((aoki + t) < a ){
                cout<<"Yes"<<endl;
            }else{
                cout<<"No"<<endl;
            }
        }
        else{
            cout<<"No"<<endl;
        }
    }
    else{
        cout<<"No"<<endl;
    }
    return 0;
}