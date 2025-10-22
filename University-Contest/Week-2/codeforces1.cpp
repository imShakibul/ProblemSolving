#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    long long arr_len, min_num;
    cin >> arr_len >> min_num;
    
    vector<long long> v;
    long long temp, bigger = 0;
    for(int i = 0; i < arr_len; i++){
        cin >> temp;
        if(temp>=min_num){
            bigger++;
        }
        else{
            v.push_back(temp);
        }
    }

    sort(v.begin(), v.end(), greater<long long>());

    long long mult = 1;

    // 29 25 16 15 14 12 9 6 2

    for(int i = 0; i <= v.size(); i++){
        while(v[i]*mult >= min_num){
            bigger++;
            i++;
        }

        mult = mult * 2;
    }
    cout << bigger << endl;
    return 0;
}