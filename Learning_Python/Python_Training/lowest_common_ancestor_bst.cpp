/**
 * find the lowest common ancestor in a BST for given two nodes
 *  Sample Tree:
              10
             / \
            6   15
           / \  / \
          3  8  12 17
                 \  \
                 13  20
    give - tree and two values
    return the lowest common ancestor
    function LCA (root, v1, v2)

    eg (8, 17) ans = 10
    13, 20 ans = 15
    3, 8 ans = 6

    6 10 15
    3 6 8

    ======= observation->
    alwasy-> v1 < LCA < v2
    function LCA(tree, v1, v2){
        while (root != null){
            if (v2 < root.key && q < root.key) {
                ROOT = ROOT.LEFT;
            }
            else if ( p > root.key && q > root.key) {
                root = root.right
            }
            else {
                return root.key
            }
        }
        return null;
    }

 *
 */
