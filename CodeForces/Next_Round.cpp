#include<iostream>
using namespace std;

int main(){
    int n,k;
    cin>>n>>k;
    int arr[n];
    int min = 0;
    int count = 0;
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }
    for(int i = 0; i < n; i++){
        min = arr[k-1];
        if(arr[i] > 0 && arr[i] >= min){
            count++;
        }
    }
    cout<<count<<endl;

    return 0;
}