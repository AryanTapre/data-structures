// leetcode :  236
// IMPORTANT..

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

Node* buildTree(vector<int> &data, int &i) {
    if(data.at(i) == -1)
        return nullptr;

    Node* newNode = new Node(data.at(i));
    i++;
    newNode->left = buildTree(data,i);
    i++;
    newNode->right = buildTree(data,i);
}

void print(Node* root) {
    if(root == nullptr) 
        return;
    
    queue<Node*> q;
    q.push(root);
    q.push(nullptr);

    while(!q.empty()) {
        Node* temp = q.front();
        q.pop();

        if(temp == nullptr) {
            cout<<endl;
            if(!q.empty())  
                q.push(nullptr);
        }
        else {
            cout<<temp->data<<" ";
            if(temp->left) 
                q.push(temp->left);
            if(temp->right)
                q.push(temp->right);
        }
    }
}

Node* lowestCommonAncestor(Node* root, Node* p, Node* q) {
    if(root == nullptr) 
        return nullptr;

    if(root->data == p->data)
        return p;
    if(root->data == q->data)  
        return q;

    Node* leftAns = lowestCommonAncestor(root->left,p,q); 
    Node* rightAns = lowestCommonAncestor(root->right,p,q);

    if(leftAns != nullptr && rightAns != nullptr)
        return root;
    else if(leftAns == nullptr && rightAns != nullptr) 
        return rightAns;
    else if(leftAns != nullptr && rightAns == nullptr)
        return leftAns;
    else if(leftAns == nullptr && rightAns == nullptr) 
        return nullptr;
}

int main() {
 
    vector<int> data = {10,20,40,-1,-1,50,-1,-1,30,60,-1,-1,-1};
    int i = 0;
    Node* root = buildTree(data,i);
    print(root);

    Node* p = new Node(20);
    Node* q = new Node(30);

    cout<<"lowest common Ancestor : "<<lowestCommonAncestor(root,p,q)->data;

return 0;
}