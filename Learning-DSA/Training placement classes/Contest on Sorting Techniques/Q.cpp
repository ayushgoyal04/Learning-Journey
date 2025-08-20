#include <bits/stdc++.h>
using namespace std;

bool compare(pair<int, int> a, pair<int, int> b) {
    if (a.first == b.first) {
        return a.second > b.second; // Decreasing order of ordinate
    }
    return a.first < b.first; // Increasing order of abscissa
}

int main() {
    vector<pair<int, int>> points;
    int x, y;

  // Input
    while (cin >> x >> y) {
        points.push_back(make_pair(x, y));
    }
    sort(points.begin(), points.end(), compare);

    // Output sorted points
    for (const auto& point : points) {
        cout << point.first << " " << point.second << endl;
    }

    return 0;
}
