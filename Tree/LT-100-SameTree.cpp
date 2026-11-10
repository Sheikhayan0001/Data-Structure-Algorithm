
#include <iostream>
using namespace std;

struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int x) {
        val = x;
        left = NULL;
        right = NULL;
    }
};

class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {

        // Both trees are empty
        if (p == NULL && q == NULL) {
            return true;
        }

        // Only one tree is empty
        if (p == NULL || q == NULL) {
            return false;
        }

        // Compare current node values
        if (p->val != q->val) {
            return false;
        }

        // Compare left subtrees
        bool leftSame = isSameTree(p->left, q->left);

        // Compare right subtrees
        bool rightSame = isSameTree(p->right, q->right);

        // Both subtrees must be identical
        return leftSame && rightSame;
    }
};

int main() {

    // Creating Tree P
    TreeNode* p = new TreeNode(1);
    p->left = new TreeNode(2);
    p->right = new TreeNode(3);

    // Creating Tree Q
    TreeNode* q = new TreeNode(1);
    q->left = new TreeNode(2);
    q->right = new TreeNode(3);

    Solution obj;

    if (obj.isSameTree(p, q)) {
        cout << "Both trees are SAME" << endl;
    }
    else {
        cout << "Both trees are NOT SAME" << endl;
    }

    return 0;
}
