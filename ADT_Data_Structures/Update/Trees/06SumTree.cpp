#include<iostream>
#include<queue>
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


int sumTree(Node* root) {
    // base case
    if(root == nullptr) {
        return 0;
    }

    int leftTreeSum = sumTree(root->left);
    int rightTreeSum = sumTree(root->right);

    int currentNodeData = root->data;
    int newData = leftTreeSum + currentNodeData + rightTreeSum;

    root->data = newData;

    return root->data;
}

void levelOrderTraversal(Node* root) {
    if(root == nullptr) {
        return;
    }

    queue<Node*> q;
    q.push(root);
    q.push(nullptr);

    while(!q.empty()) {
        Node* temp = root;
        q.pop();

        if(temp == nullptr) {
            cout<<endl;
            if(!q.empty()) 
                q.push(nullptr);
        }
        else {
            cout<<temp->data<<" ";
            if(temp->left) {
                q.push(temp->left);
            }
            if(temp->right){
                q.push(temp->right);
            }
        }
    }
}

int main() {
 
    vector<int> data = {10,20,40,-1,-1,50,-1,-1,30,60,-1,-1,-1};
    int i = 0;
    Node* root = buildTree(data,i);
    levelOrderTraversal(root);


return 0;
}