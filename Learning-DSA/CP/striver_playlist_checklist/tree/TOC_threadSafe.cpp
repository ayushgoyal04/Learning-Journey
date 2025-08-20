#include <vector>
#include <iostream>
#include <mutex>

using namespace std;

int main() {

}

class LockingTree {
    public:
    int locked[2001], par[2001];
    vector<int> adj[2001];
    mutex mtx;  // Mutex to protect shared state

    LockingTree(vector<int>& parent) {
        int n = parent.size();
        locked[0] = -1, par[0] = -1;
        for(int i = 1; i < n; i++) {
            adj[parent[i]].push_back(i);
            locked[i] = -1;
            par[i] = parent[i];
        }
    }

    bool lock(int num, int user) {
        lock_guard<mutex> lock(mtx);  // Lock the mutex
        if(locked[num] != -1) return false;
        locked[num] = user;
        return true;
    }

    bool unlock(int num, int user) {
        lock_guard<mutex> lock(mtx);  // Lock the mutex
        if(locked[num] == -1 || locked[num] != user) return false;
        locked[num] = -1;
        return true;
    }

    bool check_descendant(int node) {
        lock_guard<mutex> lock(mtx);  // Lock the mutex
        if(locked[node] != -1) return true;
        for(auto &x : adj[node]) if(check_descendant(x)) return true;
        return false;
    }

    void unlock_all_descendant(int node) {
        lock_guard<mutex> lock(mtx);  // Lock the mutex
        if(locked[node] != -1) locked[node] = -1;
        for(auto &x : adj[node]) unlock_all_descendant(x);
    }

    bool upgrade(int num, int user) {
        lock_guard<mutex> lock(mtx);  // Lock the mutex
        for(int node = num; node != -1; node = par[node]) if(locked[node] != -1) return false;
        if(!check_descendant(num)) return false;
        unlock_all_descendant(num);
        locked[num] = user;
        return true;
    }
};
