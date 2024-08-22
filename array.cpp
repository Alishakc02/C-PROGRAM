// A C++ PROGRAM TO PRINT THE GIVEN ARRAY AS IT IS
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
void array_matrix(int r, int c)
{
    int matrix[r][c];
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cin >> matrix[i][j];
        }
    }
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cout << setw(5) << matrix[i][j] << endl;
        }
    }
}
int main()
{
    int row, col;
    cout << "Enter the number of rows of the matrix:" << endl;
    cin >> row;
    cout << "Enter the number of columns of the matrix:" << endl;
    cin >> col;

    cout << "The matrix is:" << endl;
    array_matrix(row, col);
    return 0;
}