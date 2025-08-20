#include <iostream>
#include <vector>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
    int n;
    while (true) {
        cin >> n;
        if (n == 0)
            break;

        // Read scores
        vector<double> scores(n);
        double sum = 0;
        for (int i = 0; i < n; ++i) {
            cin >> scores[i];
            sum += scores[i];
        }

        // Calculate mean
        double mean = sum / n;

        // Calculate variance
        double variance = 0;
        for (int i = 0; i < n; ++i) {
            variance += (scores[i] - mean) * (scores[i] - mean);
        }
        variance /= n;

        // Calculate standard deviation
        double std_deviation = sqrt(variance);

        // Output standard deviation with precision of 10^-4
        cout << fixed << setprecision(4) << std_deviation << endl;
    }
    return 0;
}
