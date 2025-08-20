#include <iostream>
#include <unordered_set>
using namespace std;
int main() {
    int t;
    cin >> t;

    while (t--) {
        string jewels, stones;
        cin >> jewels >> stones;

        // Input validation
        if (jewels.size() > 100 || stones.size() > 100) {
            cerr << "Input string exceeds size limit!" <<endl;
            return 1;
        }

        // Create a set to store jewels
        unordered_set<char> jewelSet;
        for (char c : jewels) {
            jewelSet.insert(c);
        }

        // Count the jewels in the stone string
        int count = 0;
        for (char c : stones) {
            if (jewelSet.count(c) > 0) {
                count++;
            }
        }

        cout << count <<endl;
    }

    return 0;
}