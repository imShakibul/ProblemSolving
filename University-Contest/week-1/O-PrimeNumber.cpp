#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int n;
    int count = 0;
    cin>>n;
    for(int i = 1; i <= sqrt(n); i++){
    if(n % i == 0){
        count++;
    }
}
if((count == 1 || n == 2) && n != 1){
    cout<<"Yes"<<endl;
}
else{
    cout<<"No"<<endl;
}

    return 0;
}