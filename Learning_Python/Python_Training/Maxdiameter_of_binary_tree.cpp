/*
given -> binary tree

=======Iterative approach=======

total_diameter = -1;
int dist_calc(tree, total_diameter){

    // logic to get evry single non leaf node

    while(){


    distance = maxdist(currnode);
    total_diameter = max(total_diameter, distance)
    }

    return total_diameter
}

int maxdist(currnode){
    distance = 0
    while(nodeleft != -1 ){
        nodeleft = node.left
        distleft++;
    }
    while(node.right != -1 ){
        nodeight = node.right
        distright++;
    }
    distance = distleft + distright;
    RETURN dstance;
}


====== recursive approach=======
bottom up approach-> stat from the lef and start calculating the height of eahc parent node.
The height of leaf = 0,
the height of pareent-> 1 + max(h(left), h(right))
and at the same time measure the diameter as well
diamere of a node ->
d1 = h(left +1) + h(right + 1)
diameter = max(d1, d(left), d(right))

your root node will get the max diameter of all the nodes from this.


// pseudocode


// complexity-> time- runtime O(n) and space O(h) where = height of the tree- worse case if O(n) when all the nodes are on one side.
int diamter_of_binary_tree(root){
    pair<int, int> get_info(node){
        if (node == null) return {0, 0}
    }
        left_height = get_info(node_left)
        left_diameter = get_info(node_left)
        right_height = get_info(node_right)
        right_diameter = get_info(node_right)

        current_height = 1 + max(left_height, right_height)
        current_diameter = max (left_diameter, right_diameter, left_height + right_height + 2)
        return {current_height, current_diameter}
    return get_info(root[1])

}

*/
#include <bits/stdc++.h>
using namespace std;

// Define the structure for a binary tree node
struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

// Helper function that returns a pair: {height, diameter}
pair<int, int> get_info(TreeNode* node) {
    if (!node) return { -1, 0 };  // height -1 for null, diameter 0

    // Recursively get left and right info
    pair<int, int> left = get_info(node->left);
    pair<int, int> right = get_info(node->right);

    int current_height = 1 + max(left.first, right.first);
    int current_diameter = max({ left.second, right.second, left.first + right.first + 2 });

    return { current_height, current_diameter };
}

// Main function to compute diameter
int diameter_of_binary_tree(TreeNode* root) {
    return get_info(root).second;
}

int main() {
    /*
        Sample Tree:
              1
             / \
            2   3
           / \
          4   5

        Diameter: 3 (Path: 4 → 2 → 1 → 3)
    */

    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);

    cout << "Diameter of binary tree: " << diameter_of_binary_tree(root) << endl;

    return 0;
}


/*
there are 25 horses, race max 5 in a race, no clock
find the top 3 in min race

1 2 3 4 5-> (we get the top 3)

6 7 8 9 10-> (we get the top 3)

11 12 13 14 15-> (we get the top 3)

16 17 18 19 20-> (we get the top 3)

21 22 23 24 25-> (we get the top 3)

winner of each race ( we get the fastest )
2nd or each race (we get the 2nd fast)
winner of the 2nd place race with loosers of the winner bracket ( we get the 2nd fastes)
winner of the thire place race ()

*/
