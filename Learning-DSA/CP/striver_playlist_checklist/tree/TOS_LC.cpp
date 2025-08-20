#include<iostream>
#include<vector>
using namespace std;

int main(){
    
}

class LockingTree {
public:
    vector<int> parent;
    vector<vector<int>> children;
    vector<bool> locked;
    vector<int> user;

    LockingTree(vector<int>& p) {
        parent = p;
        children = vector<vector<int>>(p.size());
        locked = vector<bool>(p.size());
        user = vector<int>(p.size());

        for(int i = 1; i < p.size(); i++){
            children[p[i]].push_back(i);
        }
    }

    bool lock(int num, int u) {
        if(locked[num]) return false;
        locked[num] = true;
        user[num] = u;
        return true;
    }

    bool unlock(int num, int u) {
        if(!locked[num]) return false;
        if(user[num] != u) return false;
        locked[num] = false;
        return true;
    }

    bool are_ancestors_unlocked(int n){
        if(n == -1) return true;
        return !locked[n] && are_ancestors_unlocked(parent[n]);
    }

    bool at_least_one_decendent_locked(int n) {
        bool res = locked[n];
        for(int child: children[n]) {
            res |= at_least_one_decendent_locked(child);
        }
        return res;
    }

    void unlock_all_descendents(int n){
        locked[n] = false;
        for(int child : children[n]) {
            unlock_all_descendents(child);
        }
    }

    bool upgrade(int num, int u) {
        if(!are_ancestors_unlocked(num)) return false;
        if(!at_least_one_decendent_locked(num)) return false;
        unlock_all_descendents(num);
        locked[num] = true;
        user[num] = u;
        return true;
    }
};
