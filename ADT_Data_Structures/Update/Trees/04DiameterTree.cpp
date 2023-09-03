// leetcode:543

#include<iostream>
using namespace std;

int height(TreeNode* root) {
    if(root == nullptr) {
        return 0;
    }

    int leftHeight = height(root->left);
    int rightHeight = height(root->right);

    int ans = max(leftHeight,rightHeight) + 1;
    return ans;
}

    int diameterOfBinaryTree(TreeNode* root) {
        if(root == NULL)
            return 0;

        int left = diameterOfBinaryTree(root->left);
        int right = diameterOfBinaryTree(root->right);
        int whole = height(root->left) + height(root->right);

        int ans = max(left,max(right,whole));
        return ans;    

    }

int main() {
 
return 0;
}