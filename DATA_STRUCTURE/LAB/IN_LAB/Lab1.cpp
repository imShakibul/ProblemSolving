#include <iostream>
using namespace std;

int main() {
    int arr[10] = {1,2,3,4,5,6,7};
    cout << "Value Before inserting...." << endl;
    for(int i = 0; i < 10; i++){
        cout << "Value of Index " << i << ": " << arr[i] << endl;
    }

    int pos, val;
    cout << "Please enter a position (1-10): ";
    cin >> pos;

    while(pos < 1 || pos > 10){
        cout << "You have entered an invalid position!" << endl;
        cout << "Please enter again: ";
        cin >> pos;
    }

    cout << "Please enter a value to insert: ";
    cin >> val;

    pos--;

    for(int i = 9; i > pos; i--){
        arr[i] = arr[i - 1];
    }

    arr[pos] = val;

    cout << "Value After inserting..." << endl;
    for(int i = 0; i < 10; i++){
        cout << "Value of Index " << i << ": " << arr[i] << endl;
    }

    cout << "Please enter a position to delete (1-10): ";
    cin >> pos;

    while(pos < 1 || pos > 10){
        cout << "You have entered an invalid position!" << endl;
        cout << "Please enter again: ";
        cin >> pos;
    }

    pos--;

    for(int i = pos; i < 9; i++){
        arr[i] = arr[i + 1];
    }
    arr[9] = 0;

    cout << "Value After deleting..." << endl;
    for(int i = 0; i < 10; i++){
        cout << "Value of Index " << i << ": " << arr[i] << endl;
    }

    cout<<"Enter a Value for Search :";
    cin>>val;
    bool found = true;
    for(int i = 0; i < 10; i++){
        if(arr[i] == val){
            cout<<"Number Found In Index : "<<i<<endl;
            found = true;
            break;
        }
    }
    if(!found){
        cout<< "Number is not Found in Array "<<endl;
    }

    return 0;
}
