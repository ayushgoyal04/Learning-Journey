#include<bits/stdc++.h>
using namespace std;

void printHollowHalfInvertedPyramid(int height) {
    for (int i = height; i >= 1; --i) {
        // Print spaces before the '*' to align the pattern
        for (int k = 1; k <= i; ++k) {
            if (k == 1 || k == i || i == height) {
                cout << '*'<<" ";
            } else {
                cout << ' '<<" ";
            }
        }
        for (int j = 1; j <= height - i; ++j) {
           cout << ' '<<" ";
        }

        cout << endl;
    }
}

int main() {
    int height;

    cin >> height;

  
    printHollowHalfInvertedPyramid(height);

    return 0;
}