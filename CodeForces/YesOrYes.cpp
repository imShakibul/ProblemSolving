#include <bits/stdc++.h>
using namespace std;

int main()
{
    string yes;
    int t;
    cin>>t;
    while(t--){
        cin>>yes;
        for(int i = 0; i <3; i++){
            yes[i] = tolower(yes[i]);
        }
        if(yes == "yes"){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }

    return 0;
}