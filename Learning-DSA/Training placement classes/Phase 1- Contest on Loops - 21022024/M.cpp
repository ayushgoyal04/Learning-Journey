#include<bits/stdc++.h>
using namespace std;


void printPyramid(int height) {
    for (int i = 1; i <= height; ++i) {
        // Print spaces before the '*' to align the pyramid
        for (int j = 1; j <= height - i; ++j) {
            std::cout << ' ';
        }

        // Print '*' for the current row
        for (int k = 1; k <= 2 * i - 1; ++k) {
            std::cout << '*';
        }

        // Move to the next line after each row
        std::cout << std::endl;
    }
}

int main() {
    int height;

 
 cin >> height;


    printPyramid(height);

    return 0;
}