#include<bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N;
        cin >> N;

        if (N % 4 != 0) {
            cout << "NO\n";
        } else {
            cout << "YES\n";

            vector<int> A(N/2), B(N/2);

            for (int i = 1; i <= N/4; i++) {
                A[i-1] = i * 2;
                B[i-1] = i * 2 - 1;
            }

            for (int i = N/4 + 1; i <= N/2; i++) {
                A[i-1] = i * 2 - 1;
                B[i-1] = i * 2;
            }

            // Print array A
            for (int i = 0; i < N/2; i++) {
                cout << A[i] << " ";
            }
            cout << "\n";

            // Print array B
            for (int i = 0; i < N/2; i++) {
                cout << B[i] << " ";
            }
            cout << "\n";
        }
    }

    return 0;
}