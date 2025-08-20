#include <iostream>
#include <cmath>

using namespace std;

long long flagstones_needed(long long n, long long m, long long a) {
    // Calculate the number of flagstones needed and round up to nearest integer
    return ceil((double)n / a) * ceil((double)m / a);
}

int main() {
    // Input
    long long n, m, a;
    cin >> n >> m >> a;

    // Output
    cout << flagstones_needed(n, m, a) << endl;

    return 0;
}
