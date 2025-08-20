#include <bits/stdc++.h>
using namespace std;

// Function to print the board
void print(const vector<vector<bool>>& arr) {
    for (const auto& row : arr) {
        for (bool cell : row) {
            cout << (cell ? "Q" : ".") << " ";
        }
        cout << endl;
    }
    cout << endl;
}

// Function to check if placing a queen is possible at position (row, col)
bool isPossible(const vector<vector<bool>>& arr, int row, int col) {
    // Check column
    for (int i = row; i >= 0; i--) {
        if (arr[i][col]) {
            return false;
        }
    }
    // Check left diagonal
    for (int i = row, j = col; i >= 0 && j >= 0; i--, j--) {
        if (arr[i][j]) {
            return false;
        }
    }
    // Check right diagonal
    for (int i = row, j = col; i >= 0 && j < arr[0].size(); i--, j++) {
        if (arr[i][j]) {
            return false;
        }
    }
    return true;
}

// Recursive function to solve N-Queens
void ans(vector<vector<bool>>& arr, int row, int qpsf, int tq) {
    if (qpsf == tq) {
        print(arr);
        return;
    }
    for (int col = 0; col < arr[0].size(); col++) {
        if (isPossible(arr, row, col)) {
            arr[row][col] = true;
            ans(arr, row + 1, qpsf + 1, tq);
            arr[row][col] = false;
        }
    }
}

int main() {
    int n = 4; // Size of the board
    vector<vector<bool>> arr(n, vector<bool>(n, false));
    ans(arr, 0, 0, n);
    return 0;
}
