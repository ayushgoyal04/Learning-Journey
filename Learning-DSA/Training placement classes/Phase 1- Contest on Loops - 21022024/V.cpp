#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
    int a, b, C;
    cin >> a >> b >> C;

    // Convert angle C from degrees to radians
    double rad_C = C * M_PI / 180.0;

    // Calculate area (S)
    double S = 0.5 * a * b * sin(rad_C);

    // Calculate length of the circumference (L)
    double c = sqrt(a * a + b * b - 2 * a * b * cos(rad_C));
    double L = a + b + c;

    // Calculate height (h)
    double h = b * sin(rad_C);

    // Output the results with precision of 10^-4
    cout << fixed << setprecision(8) << S << endl;
    cout << fixed << setprecision(8) << L << endl;
    cout << fixed << setprecision(8) << h << endl;

    return 0;
}

