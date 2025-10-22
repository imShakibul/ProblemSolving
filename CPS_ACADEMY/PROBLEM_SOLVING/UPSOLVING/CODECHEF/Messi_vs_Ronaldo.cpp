#include<iostream>
using namespace std;

int main(){
    int a,b,x,y,messi,ronaldo;
    cin>>a>>b>>x>>y;
    messi = (a*2) + b;
    ronaldo = (x*2) + y;
    if(ronaldo > messi){
        cout<<"Ronaldo"<<endl;
    }else if(messi > ronaldo){
        cout<<"Messi"<<endl;
    }else{
        cout<<"Equal"<<endl;
    }

    return 0;
}