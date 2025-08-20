 #include <iostream>

using namespace std;

// Function to find cube root using binary search
long long find_cube_root(long long num) {
    long long left = -1000000, right = 1000000; // Considering the range of inputs
    long long ans = 0;

    // Binary search
    while (left <= right) {
        long long mid = (left + right) / 2;
        if (mid * mid * mid == num) {
            ans = mid;
            break;
        } else if (mid * mid * mid < num) {
            ans = mid;
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }

    return ans;
}

int main() {
    int T;
    cin >> T; // Number of test cases

    // Loop through each test case
    for (int i = 0; i < T; ++i) {
        long long N;
        cin >> N; // Input integer
        long long result = find_cube_root(N);
        cout << result << endl;
    }

    return 0;
}


  
//qwiudgoi