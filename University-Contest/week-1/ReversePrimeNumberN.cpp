#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int a, b;
    cin >> a >> b;

    int MPC = 0;

    for(int num = a; num <= b; num++){
        int count = 0;

        for(int i = 1; i <= sqrt(num); i++){
            if(num % i == 0){
                count++;
            }
        }

        if((count == 1 || num == 2) && num != 1){
            int n = num;
            int rev = 0;
            while(n > 0){
                rev = rev * 10 + n % 10;
                n = n / 10;
            }
            int count2 = 0;
            for(int i = 1; i <= sqrt(rev); i++){
                if(rev % i == 0){
                    count2++;
                }
            }

            if((count2 == 1 || rev == 2) && rev != 1){
                MPC++;
            }
        }
    }

    cout << MPC << endl;

    return 0;
}
