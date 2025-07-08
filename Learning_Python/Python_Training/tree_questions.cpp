/*
Inverse a binary tree . A tree is given, imaging a mirror form the root node, invert those (left becodes right and right becomes left)

prseudocode-

function invert_bt(tree){
// CAN BE OPTIMISED, NO NEED FOR THESE MANY CHECKS
    if (leftnode == null and rightnode!= null){
        leftnode = rightnode
    }
    else if (left node != null and right node == null ){
        rightnode = leftnode
    }
    else if(leftnode != null and rightnode != null){
        swap (leftnode, rightnode)
        invert_bst(leftnode)
        invert_bst(rightode)
    }
    else -> if (leftnode == null and rightnode == null) {
        return ;
    }
}
*/

/*
q2 FIND THE KTH SMALLEST ELEMENT IN A BST

// preudocode- do the inorder traversal and return the kts smallest. INORDER is sorted of a binary tree

DO Depth First Search IN-ORDER
int kthsmallest(tree, k){

}
*/


/*
Q3] Binary tree max path sum ( think on the lines of max diameteter )
sum will be calculated as the sum += max(ledft sum + right sume , leftsum, rightsum)

int max_path_sum(root){
    max_sum = 0;

    def get_max_sum(node){
        if (node == null) {
            rETURN 0
        }
        left = max(get_max_sum(node.left), 0) // handeling when the values in the nodes are negative
        right = max(gt_max_sum(node.right), 0)
        current_sum = node.key + left + right
        max_sum = max(max_sum , current_sum)
        return node.key + max(left, right)
    }
    get_max_sum(root)
    return max_sum
}
*/

/*

Serialization of binary tree
void serialize(root){
    DEF HELPER(node){
        if noode == null return None
        return {
            'key': node.key,
            left: helper(node.left)
            right = helper(node.right)
        }
    }
    return json.dumps(helper(root))
}

// cpp->

function serialize(TreeNode* root) -> string:
    function helper(TreeNode* node) -> string:
        if node == nullptr:
            return "#,"  // marker for null

        result = to_string(node->val) + ","
        result += helper(node->left)
        result += helper(node->right)
        return result

    return helper(root)


// python -

void deserialize(data):
    def helper(node_dict){
        if node_dict in none return none
        node = BinaryTree(node_dict[key])
        node.left = helper(node_dict[left])
        node.RIGHT = helper(node_dict[RIGHT])
        return node
    }
    return helper(json.loads(data))

// cpp->

function deserialize(string data) -> TreeNode*:
    // split data by commas into a list
    tokens = split(data, ',')

    function helper(iterator<string>& it) -> TreeNode*:
        if *it == "#":
            advance(it)
            return nullptr

        val = stoi(*it)
        advance(it)

        node = new TreeNode(val)
        node->left = helper(it)
        node->right = helper(it)
        return node

    iterator = tokens.begin()
    return helper(iterator)


*/
