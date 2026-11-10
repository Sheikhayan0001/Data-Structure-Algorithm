//======================== Calculate maximum depth of Tree =====================================

// calculate complete left subtree depth
// calculate complete right subtree depth
// Find max(leftSubtree , rightSubtree)
// return +1 


#include <iostream>
#include <algorithm>
using namespace std;

// Structure of a Binary Tree Node
struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;

    // Constructor
    TreeNode(int x) {
        val = x;
        left = NULL;
        right = NULL;
    }
};

// Solution Class
class Solution {
public:

    int maxDepth(TreeNode* root) {

        // Base Case: If node is NULL, return 0
        if (root == NULL) {
            return 0;
        }

        // Calculate depth of left subtree
        int leftDepth = maxDepth(root->left);

        // Calculate depth of right subtree
        int rightDepth = maxDepth(root->right);

        // Return the greater depth + 1 for current node
        return 1 + max(leftDepth, rightDepth);
    }
};

int main() {

    // Creating the Binary Tree
    /*
              1
             / \
            2   3
           /
          4
         /
        5
    */

    TreeNode* root = new TreeNode(1);

    root->left = new TreeNode(2);
    root->right = new TreeNode(3);

    root->left->left = new TreeNode(4);
    root->left->left->left = new TreeNode(5);

    // Creating Solution object
    Solution obj;

    // Finding Maximum Depth
    int answer = obj.maxDepth(root);

    // Printing result
    cout << "Maximum Depth of Binary Tree: " << answer << endl;

    return 0;
}
