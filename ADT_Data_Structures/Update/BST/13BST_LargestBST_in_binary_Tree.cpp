//TODO: most imp for BST
// find largest BST possible in BST return the size of largest BST..

#include<iostream>
#include<vector>
#include<limits.h>
#include<algorithm>
#include<bits/stdc++.h>
using namespace std;

//FIXME: class for binary tree.
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

//FIXME: class to find largest BST in Binary Tree..
class NodeData {
    public:
        int size,mini,maxi;
        bool validBST;

        NodeData() {}
        NodeData(int _size, int _mini, int _maxi, bool _validBST) : size(_size),mini(_mini),maxi(_maxi),validBST(_validBST) {}
};

NodeData largestBST(Node* root, int &ans) {
    if(root == nullptr) {
        NodeData nodeData;
            nodeData.size = 0;
            nodeData.mini = INT_MAX;
            nodeData.maxi = INT_MIN;
            nodeData.validBST = true;
        return nodeData;
    }

    NodeData leftSubTree = largestBST(root->left,ans);
    NodeData rightSubTree = largestBST(root->right,ans);

    NodeData currentNode;
    currentNode.size = leftSubTree.size + rightSubTree.size + 1;
    currentNode.mini = min(root->data,leftSubTree.mini);
    currentNode.maxi = max(root->data,rightSubTree.maxi);

    if(leftSubTree.validBST && rightSubTree.validBST && (root->data > leftSubTree.maxi && root->data < rightSubTree.mini)) {
        currentNode.validBST = true;
    } else {
        currentNode.validBST = false;
    }

    //saving the Ans..
    if(currentNode.validBST) {
        ans = max(ans, currentNode.size);
    }

    return currentNode;
}


Node* buildTree(vector<int> &data, int &i) {
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


int main() {
 
    vector<int> data = {10,20,60,75,-1,-1,80,-1,-1,70,-1,-1,8,5,3,-1,-1,7,-1,-1,30,11,-1,-1,40,-1,-1};
    int i = 0;
    Node* root = buildTree(data,i);

    cout<<"Largest BST in Binary Tree is  : "<<endl;
    int ans = 0;
    largestBST(root,ans);
    cout<<ans<<endl;

return 0;
}