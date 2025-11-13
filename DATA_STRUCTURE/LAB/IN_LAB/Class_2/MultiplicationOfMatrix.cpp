#include <iostream>
using namespace std;

int main()
{
    int rowsA, colsA, rowsB, colsB;

    cout << "Enter number of rows for Matrix A: ";
    cin >> rowsA;
    cout << "Enter number of columns for Matrix A: ";
    cin >> colsA;

    int A[10][10];
    cout << "\nEnter elements of Matrix A:\n";
    for (int i = 0; i < rowsA; i++)
    {
        for (int j = 0; j < colsA; j++)
        {
            cout << "A[" << i << "][" << j << "]: ";
            cin >> A[i][j];
        }
    }

    cout <<endl<< "Enter number of rows for Matrix B: ";
    cin >> rowsB;
    cout << "Enter number of columns for Matrix B: ";
    cin >> colsB;

    int B[10][10];
    cout <<endl<< "Enter elements of Matrix B:"<<endl;
    for (int i = 0; i < rowsB; i++)
    {
        for (int j = 0; j < colsB; j++)
        {
            cout << "B[" << i << "][" << j << "]: ";
            cin >> B[i][j];
        }
    }
    if (colsA != rowsB)
    {
        cout <<endl<< "Matrix multiplication not possible!";
        cout <<endl<< "(Number of columns in A must equal number of rows in B)" << endl;
        return 0;
    }

    int result[10][10] = {0};

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

    cout <<endl<<"Result of Matrix Multiplication (A × B):<<endl";
    for (int i = 0; i < rowsA; i++)
    {
        for (int j = 0; j < colsB; j++)
        {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
