#include<iostream>
#include<vector>
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

Node* createBSTHelper(Node* root, vector<int>& v, int data) {
    if(root == nullptr) {
        Node* newNode = new Node(v[data]);
        return newNode;
    }

    if(v[data] < root->data) {
        root->left = createBSTHelper(root->left,v,data);
    }
    else {
        root->right = createBSTHelper(root->right,v,data);
    }
    return root;
}

Node* createBST(vector<int> & v) {
    Node* root = nullptr;
    for(int i=0; i<v.size(); i++) {
        root = createBSTHelper(root,v,i);
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

/* FIXME:
    Another way to get minimum..
    Do in-order traversal And element at oth index will be minimum

*/
int getMini(Node* root) {
    Node* temp = root;
    if(temp == nullptr) 
        return -1;

    while(temp->left != nullptr) {
        temp = temp->left;
    }
    return temp->data;
}

int main() {

  vector<int> data = {10,0,56,100,99,56,56,45,87};
    Node* root = createBST(data);
    print(root);

    cout<<endl<<"minimum val is : "<<getMini(root)<<endl;
  

return 0;
}