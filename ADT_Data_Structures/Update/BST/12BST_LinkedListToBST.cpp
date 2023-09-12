// convert Doubly LinkedList to BST

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

// TODO: BST TO LINKED-LIST
void bstToDoublyLinkedList(Node* root, Node* &head) {
    if(root == nullptr) {
        return;
    }

    bstToDoublyLinkedList(root->right,head);
    root->right = head;          // attaching root->right to head..
    if(head != nullptr) {
        head->left = root;      // attaching head->left to root..
    }
    head = root;                 // Updating the Head..

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

Node* LinkedListToBST(Node* &head, int n) {
    if(n<=0 || head == nullptr) {     // base case
        return nullptr;
    }

    Node* leftSubTree = LinkedListToBST(head,n/2);   // solving left part
    
    Node* root = head;               // creating root node
    root->left = leftSubTree;
    head = head->right;               // updating head

    root->right = LinkedListToBST(head,n-n/2-1);  // solving right part

    return root;
}


int main() {
 
    vector<int> data = {45,89,0,23,12,45,89,60,56,100};
    Node* root = createBST(data);
    
    Node* head = nullptr;
    bstToDoublyLinkedList(root,head);

    cout<<"printing the linked list : "<<endl;
    printLinkedList(head);
    cout<<endl;


    Node* newRoot = LinkedListToBST(head,data.size());
    cout<<"printing LinkedList to BST : "<<endl;

    print(newRoot);


return 0;
}