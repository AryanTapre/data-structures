#include<iostream>
#include<vector>
#include<limits.h>
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

Node* createBSTUtility(Node* root,vector<int>&data, int i) {
    if(root == nullptr) {
        Node* newNode = new Node(data[i]);
        return newNode;
    }

    if(root->data > data[i]) {
        root->left = createBSTUtility(root->left,data,i);
    } else {
        root->right = createBSTUtility(root->right,data,i);
    }

    return root;
}

Node* createBST(vector<int>&data) {
    Node* root = nullptr;
    for(int i=0; i<data.size(); i++) {
        root = createBSTUtility(root,data,i);
    }

    return root;
}

bool validateBST(Node* root, int start, int end) {
    if(root == nullptr) {
        return true;
    }

    if(root->data > start && root->data < end) {
        bool leftAns = validateBST(root->left,start,root->data);
        bool rightAns = validateBST(root->right,root->data,end);
        return leftAns && rightAns;
    }
    return false;
}

int main() {
 
    vector<int> data = {100,150,200,50,75,25,125};
    Node* root = createBST(data);
    cout<<"validate BST : "<<validateBST(root,INT_MIN,INT_MAX);

return 0;
}