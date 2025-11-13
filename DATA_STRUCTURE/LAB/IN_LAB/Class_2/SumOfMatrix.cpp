#include <iostream>
using namespace std;

int main()
{
    int arr[2][2];
    cout << "Please insert element for array 1" << endl;
    int val;
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout << "Enter element for [" << i << "," << j << "] : ";
            cin >> val;
            arr[i][j] = val;
        }
    }

    int arr1[2][2];
    cout << "Please insert element for array 2" << endl;
    int val1;
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout << "Enter element for [" << i << "," << j << "] : ";
            cin >> val1;
            arr1[i][j] = val1;
        }
    }

    cout<<"Sum of Array 1 and Array 2:"<<endl;
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout << arr[i][j]+arr1[i][j] << " ";
        }
        cout<<endl;
    
    }
}