#include<iostream>
using namespace std;

int printOddNumbers(int start, int end){
    cout << "Odd numbers between " << start << " and " << end << " are: ";
    for(int i = start; i <= end; i++){
        if(i%2 != 0){
            cout<<i<<" ";
        }
    }
    cout<<endl;
}


int main(){
    int start, end;
    cout << "Enter the starting value: ";
    cin >> start;
    cout << "Enter the ending value: ";
    cin >> end;
    cout<<"======OUTPUT======="<<endl;
    printOddNumbers(start,end);

    return 0;
}