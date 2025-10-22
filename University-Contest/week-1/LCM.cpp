#include<iostream>
using namespace std;

int main(){
    long long int a, b;
    cin>>a>>b;
    long long int x = a;
    long long int y = b;
    long long int temp;
    while(b!=0){
        temp = a % b;
        a = b;
        b = temp;
    }
    long long int lcm = (x*y)/a;

    cout<<lcm<<endl;

    return 0;
}

// #include<iostream>
// using namespace std;

// int main(){
//     int a;
//     int b;
//     int gcd = 1;
//     int lcm = 0;
//     cin>>a>>b;

//     int min;
//     if(a<b){
//         min = a;
//         // cout<<min;
//     }
//     else{
//         min = b;
//         // cout<<min;
//     }

//     for(int i = min; min > 1; i--){
//         if(a % i == 0 && b % i == 0){
//             gcd = i;
//             break;
//         }
//     }
//     cout<<gcd<<endl;
//     lcm = (a*b)/gcd;

//     cout<<lcm<<endl;


//     return 0;
// }