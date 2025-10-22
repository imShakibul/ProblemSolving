#include<iostream>
using namespace std;

int main(){
    string userName;
    cin>>userName;
    int count = 0;
    for(int i = 0; i < userName.length(); i++){
        if(userName[i] == '0'){
            continue;
        }
        for(int j = i+1; j < userName.length(); j++){//here j = i +1 for skipping previous position
            if(userName[i] == userName[j]){
            count++;
            userName[j]='0';
            }
        }
    }
    // cout<<count<<endl;
    if((userName.length()-count)%2 == 0){
        cout<<"CHAT WITH HER!"<<endl;
    }else{
        cout<<"IGNORE HIM!"<<endl;
    }








    // if((userName.length()+1)%2 == 0){
    //     cout<<"CHAT WITH HER!"<<endl;
    // }
    // else{
    //     cout<<"IGNORE HIM!"<<endl;
    // }

    return 0;
}