#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N; // Read the integer N

    // Print the multiplication table for N
    for (int i = 1; i <= 10; ++i) {
        cout << N << " * " << i << " = " << N * i << endl;
    }

    return 0;
}
