// find kth ancestor of p

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

bool k_ancestor(Node* root, Node* p, int &k) {
   if(root == nullptr) 
        return false;

    if(root->data == p->data) {
        return true;
    }

    bool leftAns = k_ancestor(root->left,p,k);
    bool rightAns = k_ancestor(root->right,p,k);

    if(leftAns || rightAns) {
        k--;
    }

    if(k == 0) {
        cout<<"ans : "<<root->data<<endl;
    }

    return leftAns || rightAns;

}

int main() {
    vector<int> data = {10,23,39,-1,40,-1,-1,25,28,-1,-1,8,1,-1,-1,9,-1,-1,11,-1,12,-1,-1};
    int i = 0;
    Node* root = buildTree(data,i);
    levelOrderTraversal(root);

    Node* p = new Node(1);
    int k = 1;
    k_ancestor(root,p,k);
   

}
