#include <bits/stdc++.h>
using namespace std;


bool isPossible(vector<int> &boards, int k, int mid) {
    int painterCount = 1;
    int cost = 0;
    for(int i = 0; i < boards.size(); i++) {
        // If a single board exceeds mid, it's not possible
        if (boards[i] > mid) return false;

        if (cost + boards[i] <= mid) {
            cost += boards[i];
        } else {
            painterCount++;
            cost = boards[i];
            if (painterCount > k) {
                return false;
            }
        }
    }
    return true;
}

int findLargestMinDistance(vector<int> &boards, int k) {
    int sum = 0;
    int maxBoard = 0;
    for(auto i : boards) {
        sum += i;
        maxBoard = max(maxBoard, i);
    }

    int start = maxBoard;  // Minimum possible value is the largest single board
    int end = sum;         // Maximum possible value is the sum of all boards
    int mid;
    int result = -1;

    while (start <= end) {
        mid = start + (end - start) / 2;

        if (isPossible(boards, k, mid)) {
            result = mid;  // Store possible result
            end = mid - 1; // Try for a smaller value
        } else {
            start = mid + 1; // Increase mid value if it's not possible
        }
    }

    return result;
}
