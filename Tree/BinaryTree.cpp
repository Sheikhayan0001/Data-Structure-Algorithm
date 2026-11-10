#include<iostream>
#include<vector>
using namespace std;

// Create root 
// 2 Child = left child , right child
class Node {
public:
    int data;       // root Node = data
    Node* left;     // Stores Add of left child
    Node* left;     // Stores Add of right child
    Node* right;    
// constructor
    Node(int val) {
        data = val;
        left = nullptr;
        right = nullptr;
    }
};

static int idx = -1;
// WE TRAVERSING EVERY ELEM OF PREORDER 
// TIME COM OF FUN = 0(n)

// pointer connect root to left and right child
Node* buildTree(vector<int> preorder){
    idx++;

    if(preorder[idx] == -1){
        return NULL; // No val exist
    }
    // CREATE ROOT
    Node* root = new Node(preorder[idx]); // initial root first elem
    // RECURSION FILL LEFT AND RIGHT VALUE
    root->left = buildTree(preorder); // LEFT
    root->right = buildTree(preorder);

    return root;
}
int main(){
    vector<int> preorder = {1, 2, -1, -1, 3, 4, -1, -1, 5, -1, -1};

    Node* root = buildTree(preorder);
    cout << root->data << endl;
    cout << root->left->data << endl;
    cout << root->right->data << endl;
    return 0;
    
}
