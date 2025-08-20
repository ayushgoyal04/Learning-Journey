 
#include <iostream>
#include <vector>
using namespace std;

bool isValid(const vector<int>& tasks, int K, int mid) {
    int workers = 1;
    int time = 0;
    for (int task : tasks) {
        time += task;
        if (time > mid) {
            time = task;
            workers++;
        }
    }
    return workers <= K;
}

int minCompletionTime(const vector<int>& tasks, int K) {
    int maxTaskTime = 0;
    int totalTaskTime = 0;
    for (int task : tasks) {
        totalTaskTime += task;
        if (task > maxTaskTime)
            maxTaskTime = task;
    }

    int low = maxTaskTime;
    int high = totalTaskTime;

    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (isValid(tasks, K, mid)) {
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }
    return low;
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        int N, K;
        cin >> N >> K;
        vector<int> tasks(N);
        for (int i = 0; i < N; ++i)
            cin >> tasks[i];
        cout << minCompletionTime(tasks, K) << endl;
    }
    return 0;
}
// i am 