
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

void bstToDoublyLinkedList(Node* root, Node* &head) {
    if(root == nullptr) {
        return;
    }

    bstToDoublyLinkedList(root->right,head);
    root->right = head;
    if(head != nullptr) {
        head->left = root;
    }
    head = root;

    bstToDoublyLinkedList(root->left,head);
}

void printLinkedList(Node* &head) {
    Node* temp = head;
    while(temp != nullptr) {
        cout<<temp->data<<" ";
        temp = temp->right;
    }
    cout<<endl;
}

int main() {
 
    vector<int> data = {45,89,0,23,12,45,89,60,56,100};
    Node* root = createBST(data);
    
    Node* head = nullptr;
    bstToDoublyLinkedList(root,head);

    cout<<"printing the linked list : "<<endl;
    printLinkedList(head);
    cout<<endl;
    

return 0;
}