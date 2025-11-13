#include <iostream>
using namespace std;

int main()
{
    int rowsA, colsA, rowsB, colsB;

    cout << "Enter number of rows for Matrix A: ";
    cin >> rowsA;
    cout << "Enter number of columns for Matrix A: ";
    cin >> colsA;

    cout << endl<< "Enter number of rows for Matrix B: ";
    cin >> rowsB;
    cout << "Enter number of columns for Matrix B: ";
    cin >> colsB;

    if (colsA != rowsB)
    {
        cout << endl << "Matrix multiplication not possible!";
        cout << endl << "(Number of columns in A must equal number of rows in B)" << endl;
        return 0;
    }

    int A[rowsA][colsA];
    cout << "\nEnter element of Matrix A:" << endl;
    for (int i = 0; i < rowsA; i++)
    {
        for (int j = 0; j < colsA; j++)
        {
            cout << "A[" << i << "][" << j << "]: ";
            cin >> A[i][j];
        }
    }

    int B[rowsB][colsB];
    cout << "\nEnter elements of Matrix A:\n";
    for (int i = 0; i < rowsB; i++)
    {
        for (int j = 0; j < colsB; j++)
        {
            cout << "B[" << i << "][" << j << "]: ";
            cin >> B[i][j];
        }
    }


    int result[rowsA][colsB];

    for (int i = 0; i < rowsA; i++)
    {
        for (int j = 0; j < colsB; j++)
        {
            result[i][j] = 0;
            for (int k = 0; k < colsA; k++)
            {
                result[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    cout<<"Result of Multiplication A * B :"<<endl;
    for(int i = 0; i < rowsA; i++){
        for(int j = 0; j < colsB; j++){
            cout<<result[i][j]<<" ";
        }
        cout<<endl;
    }
}