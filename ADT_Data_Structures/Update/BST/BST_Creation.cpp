#include<vector>
#include<queue>
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

// TODO: create BST utility function
Node* createBSTHelper(Node* root, vector<int> &v, int data) {
    if(root == nullptr) {
        Node* newNode = new Node(v[data]);
        return newNode;
    }

    if(root->data < v[data]) {
        root->right = createBSTHelper(root->right,v,data);
    }
    else {
        root->left = createBSTHelper(root->left,v,data);
    }
    return root;
}


// FIXME: creating BST
Node* createBST(vector<int> &data) {
    Node* root = nullptr;
    for(int i=0; i<data.size(); i++ ){
        root = createBSTHelper(root,data,i);
    }
    
    return root;
}


void print(Node* root) {
    if(root == nullptr) return;
    queue<Node*> q;
    q.push(root);
    q.push(nullptr);

    while(!q.empty()) {
        Node* temp = q.front();
        q.pop();

        if(temp == nullptr) {
            cout<<endl;
            if(!q.empty()) q.push(nullptr);
        }
        else {
            cout<<temp->data<<" ";
            if(temp->left) q.push(temp->left);
            if(temp->right) q.push(temp->right);
        }
    }
}

int main() {
 
    vector<int> data = {10,0,56,100,99,56,56,45,87};
    Node* root = createBST(data);
    print(root);

return 0;
}