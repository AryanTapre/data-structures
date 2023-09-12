// Leetcode 235
#include<iostream>
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


Node* lowestCommonAncestor(Node* root, Node* p, Node* q) {
    if(root == nullptr) {
        return nullptr;
    }
    
    if(p->data < root->data && q->data < root->data) {
        return lowestCommonAncestor(root->left,p,q);
    }

    if(p->data > root->data && q->data > root->data) {
        return lowestCommonAncestor(root->right,p,q);
    }

    return root;

}

int main() {

 vector<int> data = {45,89,78,5,12,31,56,78};
 Node* p = new Node(56);
 Node* q = new Node(31);

 Node* root = createBST(data);
 cout<<"LCA : "<<lowestCommonAncestor(root,p,q)->data<<endl;
 
 return 0;
}