#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i =0; i < n; i++){
        cin>>arr[i];
    }
    cout<<"======OUTPUT======="<<endl;
    cout<<"Normal Order : ";
    for(int i =0; i < n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<"Reverse Order : ";
    for(int i = n-1; i >= 0; i--){
        cout<<arr[i]<<" ";
    }

    return 0;
}