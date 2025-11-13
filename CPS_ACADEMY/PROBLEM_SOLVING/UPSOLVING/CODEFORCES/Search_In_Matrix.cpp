#include <iostream>
using namespace std;

int main()
{
    int row, col;
    cin >> row >> col;
    int arr[row][col];

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin >> arr[i][j];
        }
    }
    int ck;
    cin >> ck;
    bool check = false;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (arr[i][j] == ck)
            {
                check = true;
                break;
            }
        }
    }
    if (check)
    {
        cout << "will not take number" << endl;
    }
    else
    {
        cout << "will take number" << endl;
    }

    return 0;
}