#include<iostream>
using namespace std;

int main(){
    int a,b,c;
    cin>>a>>b>>c;
    if(a > b && a > c){
        cout<<"Yes"<<endl;
    }else if(b > a && b > c){
        cout<<"No"<<endl;
    }else{
        cout<<"No"<<endl;
    }

    return 0;
}