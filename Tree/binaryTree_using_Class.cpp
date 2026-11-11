#include<iostream>
using namespace std;

// Schema of Tree
class TreeNode{
public:
    char data;
    TreeNode* left;
    TreeNode* right;

    TreeNode(char data){
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }

};

int main()
{
    TreeNode *root = new TreeNode('A');
    root->left = new TreeNode('B');
    root->right = new TreeNode('C');
    root->left->left = new TreeNode('D');
    root->left->right = new TreeNode('E');
    root->right->right = new TreeNode('F');
    root->right->right->left = new TreeNode('G');

    cout<<root->data<<endl;
    cout<<root->left->data<<endl;
    cout<<root->right->data<<endl;

    return 0;
}