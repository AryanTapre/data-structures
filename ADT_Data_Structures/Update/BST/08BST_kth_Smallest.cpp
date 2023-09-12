//TODO: leetcode 230

#include<vector>
#include<iostream>
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

int kthSmallest(Node* root, int &k) {
    if(root == nullptr) {
        return -1;
    }
    //FIXME: LNR
    // process left part

    int leftAns = kthSmallest(root->left,k);
    if(leftAns != -1) {
        return leftAns;
    }

    //Process Node
    k--;
    if(k == 0) {
        return root->data;
    }


    // Processing the Right Part..
    int rightAns = kthSmallest(root->right,k);
    return rightAns;
}

int main() {
 
    vector<int> data = {100,150,200,50,75,25,125};
    Node* root = createBST(data);
return 0;
}