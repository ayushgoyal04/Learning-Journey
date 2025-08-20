#include <iostream>

using namespace std;

int main() {
    int T;
    cin >> T; // Number of test cases

    while (T--) {
        int N, X, Y;
        cin >> N >> X >> Y; // Input for each test case

        // Calculate the maximum number of pages Chef can read
        int max_pages = X * Y;

        // Check if the maximum number of pages Chef can read is greater than or equal to the total number of pages
        if (max_pages >= N) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
