#include<iostream>

using namespace std;

#include <bits/stdc++.h>
#define N 3
using namespace std;
  
// Below functions can be used to verify result 
// Returns true if matrix is skew symmetric, 
// else false.
bool isSymmetric(float mat[N][N])
{
    for (int i = 0; i < N; i++)
        for (int j = 0; j < N; j++)
            if (mat[i][j] != mat[j][i])
                return false;
    return true;
}

// Returns true if matrix is skew symmetric,
// else false.
bool isSkewSymmetric(float mat[N][N])
{
    for (int i = 0; i < N; i++)
        for (int j = 0; j < N; j++)
            if (mat[i][j] != -mat[j][i])
                return false;
    return true;
} 
  
void printMatrix(float mat[N][N])
{
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++)
            cout << mat[i][j] << "   ";
        cout << endl;
    }
}
  
void printDistribution(float mat[N][N])
{
    // tr is the transpose of matrix mat.
    float tr[N][N];
  
    // Find transpose of matrix.
    for (int i = 0; i < N; i++)
        for (int j = 0; j < N; j++)
            tr[i][j] = mat[j][i];
  
    // Declare two square matrix symm and
    // skewsymm of size N.
    float symm[N][N], skewsymm[N][N];
  
    // Loop to find symmetric and skew symmetric 
    // and store it into symm and skewsymm matrix.
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            symm[i][j] = (mat[i][j] + tr[i][j]) / 2;
            skewsymm[i][j] = (mat[i][j] - tr[i][j]) / 2;
        }
    }
  
    cout << "Symmetric matrix-" << endl;
    printMatrix(symm);
  
    cout << "Skew Symmetric matrix-" << endl;
    printMatrix(skewsymm);
}


int main()
{
    // mat is the N * N square matrix.
    float mat[N][N] = { { 2, -2, -4 },
                        { -1, 3, 4 },
                        { 1, -2, -3 } };
    printDistribution(mat);
  
    return 0;
}

