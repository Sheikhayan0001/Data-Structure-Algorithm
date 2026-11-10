#include<iostream>
#include<vector>
#include<queue>
using namespace std;

class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = nullptr;
        right = nullptr;
    }
};
static int idx = -1;
// WE TRAVERSING EVERY ELEM OF PREORDER 
// TIME COM OF FUN = 0(n)
Node* buildTree(vector<int> preorder){
    idx++;

    if(preorder[idx] == -1){
        return NULL; // No val exist
    }
    // CREATE ROOT
    Node* root = new Node(preorder[idx]);
    // RECURSION FILL LEFT AND RIGHT VALUE
    root->left = buildTree(preorder); // LEFT
    root->right = buildTree(preorder);

    return root;
}


// PREORDER TRAVERSAL ALGORITHM 
// current node
void preOrder(Node* root){
    if(root == NULL){
        return;
    }
    cout << root->data <<" ";
    preOrder(root->left);
    preOrder(root->right);

}

// INORDER TRAVERSAL
void inorder(Node* root){
    if(root == NULL){
        return;
    }
    inorder(root->left);
    cout << root->data <<" ";
    inorder(root->right);
}

// POSTORDER TRAVERSAL
void postOrder(Node* root){
    if(root == NULL){
        return;
    }
    postOrder(root->left);
    postOrder(root->right);
    cout << root->data << " ";
}

// LEVEL ORDER TRAVERSAL
void levelOrder(Node* root){
    queue<Node*> q;

    q.push(root);

    while(q.size() > 0){
        Node* curr = q.front();
        q.pop();

        cout << curr->data << " ";

        if(curr->left != NULL){
            q.push(curr->left);
        }

        if(curr->right != NULL){
            q.push(curr->right);
        }
    }
    cout << endl;
}

int main(){
    vector<int> preorder = {1, 2, -1, -1, 3, 4, -1, -1, 5, -1, -1};

    Node* root = buildTree(preorder);
    // preOrder(root);
    // inorder(root);
    // postOrder(root);
    levelOrder(root);
    return 0;
    
}
