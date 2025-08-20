#include <bits/stdc++.h>
using namespace std;

struct Node {
    int parent = -1;               // parent index (-1 for root)
    vector<int> children;          // child indices
    int locked_by = 0;              // 0 = unlocked, else uid
    int total_locked_subtree = 0;   // # locked nodes in subtree (including self)
    int uid_agg = 0;                // 0 = none, >0 = single uid, -1 = mixed
};

int combine_uid(int a, int b) {
    if (a == -1 || b == -1) return -1;
    if (a == 0) return b;
    if (b == 0) return a;
    return (a == b) ? a : -1;
}

void recompute_node(Node &u, const vector<Node> &nodes) {
    int candidate = 0;
    int total = (u.locked_by ? 1 : 0);
    if (u.locked_by) candidate = u.locked_by;

    for (int v : u.children) {
        total += nodes[v].total_locked_subtree;
        if (nodes[v].total_locked_subtree > 0) {
            candidate = combine_uid(candidate, nodes[v].uid_agg);
        }
    }

    u.total_locked_subtree = total;
    if (total == 0) u.uid_agg = 0;
    else if (candidate > 0) u.uid_agg = candidate;
    else u.uid_agg = -1;
}

void recompute_up(int x, vector<Node> &nodes) {
    for (int cur = x; cur != -1; cur = nodes[cur].parent) {
        recompute_node(nodes[cur], nodes);
    }
}

bool has_locked_ancestor(int x, const vector<Node> &nodes) {
    int p = nodes[x].parent;
    while (p != -1) {
        if (nodes[p].locked_by) return true;
        p = nodes[p].parent;
    }
    return false;
}

bool lock_node(int x, int uid, vector<Node> &nodes) {
    if (nodes[x].locked_by) return false;
    if (has_locked_ancestor(x, nodes)) return false;
    if (nodes[x].total_locked_subtree > 0) return false; // descendants locked
    nodes[x].locked_by = uid;
    recompute_up(x, nodes);
    return true;
}

bool unlock_node(int x, int uid, vector<Node> &nodes) {
    if (nodes[x].locked_by != uid) return false;
    nodes[x].locked_by = 0;
    recompute_up(x, nodes);
    return true;
}

void collect_locked_descendants(int x, const vector<Node> &nodes, vector<int> &list) {
    for (int v : nodes[x].children) {
        if (nodes[v].total_locked_subtree > 0) {
            collect_locked_descendants(v, nodes, list);
        }
    }
    if (x != -1 && nodes[x].locked_by) list.push_back(x);
}

bool upgrade_lock(int x, int uid, vector<Node> &nodes) {
    if (nodes[x].locked_by) return false;
    if (has_locked_ancestor(x, nodes)) return false;
    if (nodes[x].total_locked_subtree == 0) return false;
    if (nodes[x].uid_agg != uid) return false;

    // collect all locked descendants
    vector<int> to_unlock;
    for (int v : nodes[x].children) {
        if (nodes[v].total_locked_subtree > 0)
            collect_locked_descendants(v, nodes, to_unlock);
    }

    // unlock them
    for (int u : to_unlock) {
        nodes[u].locked_by = 0;
        recompute_up(u, nodes);
    }

    // lock current node
    nodes[x].locked_by = uid;
    recompute_up(x, nodes);
    return true;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N, m, Q;
    cin >> N >> m >> Q;

    vector<Node> nodes(N);
    unordered_map<string, int> name_to_index;
    name_to_index.reserve(N * 2);
    name_to_index.max_load_factor(0.7f);

    vector<string> names(N);
    for (int i = 0; i < N; ++i) {
        cin >> names[i];
        name_to_index[names[i]] = i;
    }

    for (int i = 1; i < N; ++i) {
        int parent_index = (i - 1) / m;
        nodes[i].parent = parent_index;
        nodes[parent_index].children.push_back(i);
    }

    while (Q--) {
        int type, uid;
        string name;
        cin >> type >> name >> uid;
        int idx = name_to_index[name];
        bool result = false;
        if (type == 1) result = lock_node(idx, uid, nodes);
        else if (type == 2) result = unlock_node(idx, uid, nodes);
        else if (type == 3) result = upgrade_lock(idx, uid, nodes);
        cout << (result ? "True" : "False") << '\n';
    }
    return 0;
}
