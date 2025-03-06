
#include <iostream>
using namespace std;

int main() {
    int m, n;

    // Input the number of rows and columns
    cout << "Enter number of rows and columns for the matrices: ";
    cin >> m >> n;

    // Declare matrices A, B, and C (the result of A + B)
    int A[m][n], B[m][n], C[m][n];

    // Input elements for matrix A
    cout << "Enter elements of matrix A:" << endl;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> A[i][j];
        }
    }

    // Input elements for matrix B
    cout << "Enter elements of matrix B:" << endl;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> B[i][j];
        }
    }

    // Matrix addition: A + B = C
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            C[i][j] = A[i][j] + B[i][j];  // Add corresponding elements
        }
    }

    // Output the resulting matrix C
    cout << "Resultant Matrix C (A + B):" << endl;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << C[i][j] << " ";  // Print the element
        }
        cout << endl;
    }

    return 0;
}

