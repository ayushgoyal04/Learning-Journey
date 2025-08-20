#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N, M;
    cin >> N >> M;

    vector<vector<int>> A(N, vector<int>(M));
    vector<vector<int>> result(N, vector<int>(M, 1)); // Initialize result matrix with all 1s

    // Input matrix A
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < M; ++j) {
            cin >> A[i][j];
            if (A[i][j] == 0) {
                // Set all elements in the ith row and jth column to 0
                for (int k = 0; k < N; ++k)
                    result[k][j] = 0;
                for (int k = 0; k < M; ++k)
                    result[i][k] = 0;
            }
        }
    }

    // Print the resultant matrix
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < M; ++j) {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}