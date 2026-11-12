#include<iostream>
#include<stack>
using namespace std;

TreeNode* curr = root;
stack<TreeNode*> st;

while(!st.empty() || curr != nullptr){
    while(curr != nullptr){
        st.push(curr);
        curr = curr->left;
    }
    curr = st.top;
    st.pop();
    ans.push_back(curr->val);
    curr = curr->right;
}

int main()
{
    return 0;
}