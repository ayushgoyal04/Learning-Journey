#include <bits/stdc++.h>
using namespace std;

struct TreeNode {
    int val;
    vector<TreeNode*> children;

    TreeNode(int value) {
        val = value;
    }
};

class NaryTree {
public:
    TreeNode* root;
    vector<TreeNode*> nodes;

    NaryTree(vector<int>& parent) {
        int n = parent.size();
        nodes.resize(n, nullptr);
        for (int i = 0; i < n; i++) {
            nodes[i] = new TreeNode(i);
        }
        for (int i = 0; i < n; i++) {
            if (parent[i] == -1) {
                root = nodes[i];
            } else {
                nodes[parent[i]]->children.push_back(nodes[i]);
            }
        }
    }

    void dfs(TreeNode* node, int depth = 0) {
        if (!node) return;
        cout << string(depth * 2, ' ') << node->val << "\n";
        for (TreeNode* child : node->children) {
            dfs(child, depth + 1);
        }
    }
};

int main() {
    vector<int> parent = {-1,0,0,1,1,2,2};
    NaryTree tree(parent);

    cout << "DFS Traversal of Tree:\n";
    tree.dfs(tree.root);
    return 0;
}
