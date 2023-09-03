// Implementing All the traversals..

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

void levelOrderTraversal(Node* root) {
    if(root == nullptr) {
        cout<<"Tree does NOT Exists.."<<endl;
        return;
    }
    queue<Node*> q;
    q.push(root);
    q.push(nullptr);

    while(!q.empty()) {
        Node* temp = q.front();
        q.pop();

        if(temp ==  nullptr) {
            cout<<endl;
            if(!q.empty()) q.push(nullptr);
        }
        else {
            cout<<temp->data<<" ";
            if(temp->left) {
                q.push(temp->left);
            }
            if(temp->right) {
                q.push(temp->right);
            }
        }
    }
}

void inOrderTraversal(Node* root) {
    if(root == nullptr) {
        return;
    }

    inOrderTraversal(root->left); // left call
    cout<<root->data<<" ";        // printing current node data
    inOrderTraversal(root->right); // right call
    
}

void preOrderTraversal(Node* root) {
    if(root == nullptr) {
        return;
    }

    cout<<root->data<<" ";          // printing current node data
    preOrderTraversal(root->left); // left call
    preOrderTraversal(root->right); // right call
}

void postOrderTraversal(Node* root) {
    if(root == nullptr) {
        return;
    }
    postOrderTraversal(root->left); // left call
    postOrderTraversal(root->right); // right call
    cout<<root->data<<" ";  // printing the current node data
}

int main() {
 
    vector<int> v = {10,20,40,-1,-1,50,-1,-1,30,60,-1,-1,70,-1,-1};
    int i = 0;
    Node* root = buildTree(v,i);
    levelOrderTraversal(root);

    cout<<endl<<"in order traversal.."<<endl;
    inOrderTraversal(root);

    cout<<endl<<"Pre Order Traversal"<<endl;
    preOrderTraversal(root);

    cout<<endl<<"Post Order Traversal"<<endl;
    postOrderTraversal(root);

   

return 0;
}