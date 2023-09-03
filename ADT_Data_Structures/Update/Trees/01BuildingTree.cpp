// Building a Binary Tree Using Recursive Call Techniques..

#include<iostream>
#include<queue>
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

Node* buildTree() {
    int data;
    cout<<"enter data : "<<endl;
    cin>>data;

    // baseCase..
    if(data == -1) return nullptr;

    Node* root = new Node(data);
    
    cout<<"Enter Left Node of "<<data<<endl;
    root->left = buildTree();

    cout<<"Enter Right Node of" <<data<<endl;
    root->right = buildTree();

    return root;

}   

void levelOrderTraversal(Node* root) {
    queue<Node*> q;

    q.push(root);
    q.push(nullptr);

    while(!q.empty()) {
        Node* temp = q.front();
        q.pop();
        
        if(temp == nullptr) {
            cout<<endl;
            if(!q.empty()) {
                q.push(nullptr);
            }
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

void print(Node* root) {
    if(root == nullptr) {
        cout<<"Tree does Not Exist."<<endl;
        return;
    }

    queue<Node*> q;
    q.push(root);
    q.push(nullptr);

    while(!q.empty()) {


        Node* temp  = q.front();
        q.pop();

        if(temp == nullptr) {
            cout<<endl;
            if(!q.empty()) {
                q.push(nullptr);
            }
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

int main() {
 
  Node* root;
  root = buildTree();
  print(root);

return 0;
}