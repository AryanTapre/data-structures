//FIXME: Creating BST using In-order Traversal

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

Node* bstInOrderTraversal(int inOrder[], int start, int end) {
    //base case..
    if(start > end) {
        return nullptr;
    }

    int mid = start+(end-start)/2;
    int element = inOrder[mid];

    Node* root = new Node(element);

    root->left = bstInOrderTraversal(inOrder,start,mid-1);
    root->right = bstInOrderTraversal(inOrder,mid+1,end);

    return root;
}

int main() {
 
    int inOrder[] = {10,20,30,40,50,60,70,80,90,100};
    Node* root = bstInOrderTraversal(inOrder,0,9);

    cout<<"printing"<<endl;
    print(root); 


return 0;
}