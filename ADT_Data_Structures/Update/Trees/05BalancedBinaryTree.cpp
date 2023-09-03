// LeetCode : 110

#include<iostream>
#include<math.h>
#include<vector>
using namespace std;

class Node {
    public:
        int data;
        Node* left;
        Node* right;
        
        Node(int _data) : data(_data) {
            left = nullptr;
            right = nullptr;
        }
};


Node* buildTree(vector<int>& data,int &i) {

    if(data.at(i) == -1) {
        return nullptr;
    }
    Node* root = new Node(data.at(i));
    i++;
    root->left = buildTree(data,i);
    i++;
    root->right = buildTree(data,i);

    return root;

}

int height(Node* root) {
    if(root == nullptr) {
        return 0;
    }

    int leftH = height(root->left);
    int rightH = height(root->right);

    int ans = max(leftH, rightH) + 1;
    return ans;

}

bool isBalanced(Node* root) {
    // BASE CASE.
    if(root == nullptr) {
        return true;
    }


    // 1 case solve karoo..
    int leftSubTree = height(root->left);
    int rightSubTree = height(root->right);
    int difference  = abs(leftSubTree - rightSubTree);

    bool ans1 = (difference <=1);

    // Recursion
    bool leftAns = isBalanced(root->left);
    bool rightAns = isBalanced(root->right);

    if(ans1 && leftAns && rightAns) {
        return true;
    }
    else {
        return false;
    }
}

int main() {
 
    vector<int> data = {3,9,20,-1,-1,15,7};
    int i = 0;
    Node* root = buildTree(data,i);
    cout<<"is balanced : "<<isBalanced(root);    

return 0;
}